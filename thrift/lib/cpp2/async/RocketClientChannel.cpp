/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/async/RocketClientChannel.h>

#include <memory>
#include <utility>

#include <fmt/core.h>
#include <folly/ExceptionString.h>
#include <folly/GLog.h>
#include <folly/Likely.h>
#include <folly/Memory.h>
#include <folly/Try.h>
#include <folly/compression/Compression.h>
#include <folly/fibers/FiberManager.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <folly/io/async/AsyncTransport.h>
#include <folly/io/async/EventBase.h>
#include <folly/io/async/Request.h>

#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp2/async/RequestChannel.h>
#include <thrift/lib/cpp2/async/ResponseChannel.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/transport/core/EnvelopeUtil.h>
#include <thrift/lib/cpp2/transport/core/RpcMetadataUtil.h>
#include <thrift/lib/cpp2/transport/core/ThriftClientCallback.h>
#include <thrift/lib/cpp2/transport/core/TryUtil.h>
#include <thrift/lib/cpp2/transport/rocket/PayloadUtils.h>
#include <thrift/lib/cpp2/transport/rocket/RocketException.h>
#include <thrift/lib/cpp2/transport/rocket/client/RocketClient.h>
#include <thrift/lib/cpp2/transport/rocket/client/RocketClientWriteCallback.h>
#include <thrift/lib/thrift/gen-cpp2/RpcMetadata_types.h>

using namespace apache::thrift::transport;

namespace apache {
namespace thrift {

namespace {
class OnWriteSuccess final : public rocket::RocketClientWriteCallback {
 public:
  explicit OnWriteSuccess(RequestClientCallback& requestCallback)
      : requestCallback_(requestCallback) {}

  void onWriteSuccess() noexcept override {
    requestCallback_.onRequestSent();
  }

 private:
  RequestClientCallback& requestCallback_;
};

FOLLY_NODISCARD folly::exception_wrapper processFirstResponse(
    ResponseRpcMetadata& metadata,
    std::unique_ptr<folly::IOBuf>& payload,
    uint16_t protocolId,
    folly::StringPiece methodName) {
  if (auto payloadMetadataRef = metadata.payloadMetadata_ref()) {
    switch (payloadMetadataRef->getType()) {
      case PayloadMetadata::responseMetadata:
        payload =
            LegacySerializedResponse(
                protocolId, methodName, SerializedResponse(std::move(payload)))
                .buffer;
        break;
      case PayloadMetadata::exceptionMetadata: {
        auto& exceptionMetadataBase =
            payloadMetadataRef->get_exceptionMetadata();
        auto otherMetadataRef = metadata.otherMetadata_ref();
        if (!otherMetadataRef) {
          otherMetadataRef.emplace();
        }
        if (auto exceptionNameRef = exceptionMetadataBase.name_utf8_ref()) {
          (*otherMetadataRef)["uex"] = *exceptionNameRef;
        }
        if (auto exceptionWhatRef = exceptionMetadataBase.what_utf8_ref()) {
          (*otherMetadataRef)["uexw"] = *exceptionWhatRef;
        }
        if (auto exceptionMetadataRef = exceptionMetadataBase.metadata_ref()) {
          switch (exceptionMetadataRef->getType()) {
            case PayloadExceptionMetadata::declaredException:
              payload = LegacySerializedResponse(
                            protocolId,
                            methodName,
                            SerializedResponse(std::move(payload)))
                            .buffer;
              break;
            default:
              return TApplicationException(
                  "Invalid payload exception metadata type");
          }
        } else {
          return TApplicationException("Missing payload exception metadata");
        }
        break;
      }
      default:
        return TApplicationException("Invalid payload metadata type");
    }
  }
  return {};
}

class FirstRequestProcessorStream : public StreamClientCallback {
 public:
  FirstRequestProcessorStream(
      uint16_t protocolId,
      folly::StringPiece methodName,
      StreamClientCallback* clientCallback)
      : protocolId_(protocolId),
        methodName_(methodName),
        clientCallback_(clientCallback) {}

  FOLLY_NODISCARD bool onFirstResponse(
      FirstResponsePayload&& firstResponse,
      folly::EventBase* evb,
      StreamServerCallback* serverCallback) override {
    SCOPE_EXIT {
      delete this;
    };
    if (auto error = processFirstResponse(
            firstResponse.metadata,
            firstResponse.payload,
            protocolId_,
            methodName_)) {
      serverCallback->onStreamCancel();
      clientCallback_->onFirstResponseError(std::move(error));
      return false;
    }
    serverCallback->resetClientCallback(*clientCallback_);
    return clientCallback_->onFirstResponse(
        std::move(firstResponse), evb, serverCallback);
  }
  void onFirstResponseError(folly::exception_wrapper ew) override {
    SCOPE_EXIT {
      delete this;
    };
    clientCallback_->onFirstResponseError(std::move(ew));
  }

  bool onStreamNext(StreamPayload&&) override {
    std::terminate();
  }
  void onStreamError(folly::exception_wrapper) override {
    std::terminate();
  }
  void onStreamComplete() override {
    std::terminate();
  }
  void resetServerCallback(StreamServerCallback&) override {
    std::terminate();
  }

 private:
  const uint16_t protocolId_;
  const std::string methodName_;
  StreamClientCallback* const clientCallback_;
};

class FirstRequestProcessorSink : public SinkClientCallback {
 public:
  FirstRequestProcessorSink(
      uint16_t protocolId,
      folly::StringPiece methodName,
      SinkClientCallback* clientCallback)
      : protocolId_(protocolId),
        methodName_(methodName),
        clientCallback_(clientCallback) {}

  FOLLY_NODISCARD bool onFirstResponse(
      FirstResponsePayload&& firstResponse,
      folly::EventBase* evb,
      SinkServerCallback* serverCallback) override {
    SCOPE_EXIT {
      delete this;
    };
    if (auto error = processFirstResponse(
            firstResponse.metadata,
            firstResponse.payload,
            protocolId_,
            methodName_)) {
      serverCallback->onStreamCancel();
      clientCallback_->onFirstResponseError(std::move(error));
      return false;
    }
    serverCallback->resetClientCallback(*clientCallback_);
    return clientCallback_->onFirstResponse(
        std::move(firstResponse), evb, serverCallback);
  }
  void onFirstResponseError(folly::exception_wrapper ew) override {
    SCOPE_EXIT {
      delete this;
    };
    clientCallback_->onFirstResponseError(std::move(ew));
  }

  void onFinalResponse(StreamPayload&&) override {
    std::terminate();
  }
  void onFinalResponseError(folly::exception_wrapper) override {
    std::terminate();
  }
  FOLLY_NODISCARD bool onSinkRequestN(uint64_t) override {
    std::terminate();
  }
  void resetServerCallback(SinkServerCallback&) override {
    std::terminate();
  }

 private:
  const uint16_t protocolId_;
  const std::string methodName_;
  SinkClientCallback* const clientCallback_;
};
} // namespace

rocket::SetupFrame RocketClientChannel::makeSetupFrame(
    RequestSetupMetadata meta) {
  meta.maxVersion_ref() = 1;
  CompactProtocolWriter compactProtocolWriter;
  folly::IOBufQueue paramQueue;
  compactProtocolWriter.setOutput(&paramQueue);
  meta.write(&compactProtocolWriter);

  // Serialize RocketClient's major/minor version (which is separate from the
  // rsocket protocol major/minor version) into setup metadata.
  auto buf = folly::IOBuf::createCombined(
      sizeof(int32_t) + meta.serializedSize(&compactProtocolWriter));
  folly::IOBufQueue queue;
  queue.append(std::move(buf));
  folly::io::QueueAppender appender(&queue, /* do not grow */ 0);
  // Serialize RocketClient's major/minor version (which is separate from the
  // rsocket protocol major/minor version) into setup metadata.
  appender.writeBE<uint16_t>(0); // Thrift RocketClient major version
  appender.writeBE<uint16_t>(1); // Thrift RocketClient minor version
  // Append serialized setup parameters to setup frame metadata
  appender.insert(paramQueue.move());

  return rocket::SetupFrame(
      rocket::Payload::makeFromMetadataAndData(queue.move(), {}));
}

RocketClientChannel::RocketClientChannel(
    folly::AsyncTransportWrapper::UniquePtr socket,
    RequestSetupMetadata meta)
    : evb_(socket->getEventBase()),
      rclient_(rocket::RocketClient::create(
          *evb_,
          std::move(socket),
          std::make_unique<rocket::SetupFrame>(
              makeSetupFrame(std::move(meta))))) {}

RocketClientChannel::~RocketClientChannel() {
  unsetOnDetachable();
  closeNow();
}

void RocketClientChannel::setFlushList(FlushList* flushList) {
  if (rclient_) {
    rclient_->setFlushList(flushList);
  }
}

void RocketClientChannel::setNegotiatedCompressionAlgorithm(
    CompressionAlgorithm compressionAlgo) {
  if (rclient_) {
    rclient_->setNegotiatedCompressionAlgorithm(compressionAlgo);
  }
}

folly::Optional<CompressionAlgorithm>
RocketClientChannel::getNegotiatedCompressionAlgorithm() {
  if (!rclient_) {
    return folly::none;
  }
  return rclient_->getNegotiatedCompressionAlgorithm();
}

void RocketClientChannel::setAutoCompressSizeLimit(int32_t size) {
  if (rclient_) {
    rclient_->setAutoCompressSizeLimit(size);
  }
}

RocketClientChannel::Ptr RocketClientChannel::newChannel(
    folly::AsyncTransportWrapper::UniquePtr socket,
    RequestSetupMetadata meta) {
  return RocketClientChannel::Ptr(
      new RocketClientChannel(std::move(socket), std::move(meta)));
}

void RocketClientChannel::sendRequestResponse(
    const RpcOptions& rpcOptions,
    folly::StringPiece methodName,
    SerializedRequest&& request,
    std::shared_ptr<transport::THeader> header,
    RequestClientCallback::Ptr cb) {
  sendThriftRequest(
      rpcOptions,
      RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
      methodName,
      std::move(request),
      std::move(header),
      std::move(cb));
}

void RocketClientChannel::sendRequestNoResponse(
    const RpcOptions& rpcOptions,
    folly::StringPiece methodName,
    SerializedRequest&& request,
    std::shared_ptr<transport::THeader> header,
    RequestClientCallback::Ptr cb) {
  sendThriftRequest(
      rpcOptions,
      RpcKind::SINGLE_REQUEST_NO_RESPONSE,
      methodName,
      std::move(request),
      std::move(header),
      std::move(cb));
}

void RocketClientChannel::sendRequestStream(
    const RpcOptions& rpcOptions,
    folly::StringPiece methodName,
    SerializedRequest&& request,
    std::shared_ptr<THeader> header,
    StreamClientCallback* clientCallback) {
  DestructorGuard dg(this);

  auto metadata = detail::makeRequestRpcMetadata(
      rpcOptions,
      RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE,
      static_cast<ProtocolId>(protocolId_),
      methodName,
      timeout_,
      *header,
      getPersistentWriteHeaders());

  std::chrono::milliseconds firstResponseTimeout;
  if (!preSendValidation(
          metadata, rpcOptions, clientCallback, firstResponseTimeout)) {
    return;
  }

  auto buf = std::move(request.buffer);

  if (auto compression =
          rclient_->getCompressionAlgorithm(buf->computeChainDataLength())) {
    metadata.compression_ref() = *compression;
  }

  return rclient_->sendRequestStream(
      rocket::pack(metadata, std::move(buf)),
      firstResponseTimeout,
      rpcOptions.getChunkTimeout(),
      rpcOptions.getChunkBufferSize(),
      new FirstRequestProcessorStream(protocolId_, methodName, clientCallback));
}

void RocketClientChannel::sendRequestSink(
    const RpcOptions& rpcOptions,
    folly::StringPiece methodName,
    SerializedRequest&& request,
    std::shared_ptr<transport::THeader> header,
    SinkClientCallback* clientCallback) {
  DestructorGuard dg(this);

  auto metadata = detail::makeRequestRpcMetadata(
      rpcOptions,
      RpcKind::SINK,
      static_cast<ProtocolId>(protocolId_),
      methodName,
      timeout_,
      *header,
      getPersistentWriteHeaders());

  std::chrono::milliseconds firstResponseTimeout;
  if (!preSendValidation(
          metadata, rpcOptions, clientCallback, firstResponseTimeout)) {
    return;
  }

  auto buf = std::move(request.buffer);

  if (auto compression =
          rclient_->getCompressionAlgorithm(buf->computeChainDataLength())) {
    metadata.compression_ref() = *compression;
  }

  return rclient_->sendRequestSink(
      rocket::pack(metadata, std::move(buf)),
      firstResponseTimeout,
      new FirstRequestProcessorSink(protocolId_, methodName, clientCallback),
      rpcOptions.getEnablePageAlignment());
}

void RocketClientChannel::sendThriftRequest(
    const RpcOptions& rpcOptions,
    RpcKind kind,
    folly::StringPiece methodName,
    SerializedRequest&& request,
    std::shared_ptr<transport::THeader> header,
    RequestClientCallback::Ptr cb) {
  DestructorGuard dg(this);

  auto metadata = detail::makeRequestRpcMetadata(
      rpcOptions,
      kind,
      static_cast<ProtocolId>(protocolId_),
      methodName,
      timeout_,
      *header,
      getPersistentWriteHeaders());

  std::chrono::milliseconds timeout;
  if (!preSendValidation(metadata, rpcOptions, cb, timeout)) {
    return;
  }

  auto buf = std::move(request.buffer);

  if (auto compression =
          rclient_->getCompressionAlgorithm(buf->computeChainDataLength())) {
    metadata.compression_ref() = *compression;
  }

  switch (kind) {
    case RpcKind::SINGLE_REQUEST_NO_RESPONSE:
      sendSingleRequestNoResponse(metadata, std::move(buf), std::move(cb));
      break;

    case RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE:
      sendSingleRequestSingleResponse(
          metadata, timeout, std::move(buf), std::move(cb));
      break;

    case RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE:
      // should no longer reach here anymore, use sendRequestStream
      DCHECK(false);
      break;

    default:
      folly::assume_unreachable();
  }
}

void RocketClientChannel::sendSingleRequestNoResponse(
    const RequestRpcMetadata& metadata,
    std::unique_ptr<folly::IOBuf> buf,
    RequestClientCallback::Ptr cb) {
  auto& cbRef = *cb;

  auto sendRequestFunc =
      [&cbRef,
       rclientGuard =
           folly::DelayedDestruction::DestructorGuard(rclient_.get()),
       rclientPtr = rclient_.get(),
       requestPayload = rocket::pack(metadata, std::move(buf))]() mutable {
        OnWriteSuccess writeCallback(cbRef);
        return rclientPtr->sendRequestFnfSync(
            std::move(requestPayload), &writeCallback);
      };

  auto finallyFunc = [cb = std::move(cb),
                      g = inflightGuard()](folly::Try<void>&& result) mutable {
    if (result.hasException()) {
      cb.release()->onResponseError(std::move(result.exception()));
    } else {
      // onRequestSent is already called by the writeCallback.
      cb.release();
    }
  };

  if (cbRef.isSync() && folly::fibers::onFiber()) {
    finallyFunc(folly::makeTryWith(std::move(sendRequestFunc)));
  } else {
    auto& fm = getFiberManager();
    fm.addTaskFinallyEager(
        std::move(sendRequestFunc),
        [finallyFunc = std::move(finallyFunc)](
            folly::Try<folly::Try<void>>&& arg) mutable {
          finallyFunc(collapseTry(std::move(arg)));
        });
  }
}

void RocketClientChannel::sendSingleRequestSingleResponse(
    const RequestRpcMetadata& metadata,
    std::chrono::milliseconds timeout,
    std::unique_ptr<folly::IOBuf> buf,
    RequestClientCallback::Ptr cb) {
  auto& cbRef = *cb;

  auto sendRequestFunc =
      [&cbRef,
       timeout,
       rclientGuard =
           folly::DelayedDestruction::DestructorGuard(rclient_.get()),
       rclientPtr = rclient_.get(),
       requestPayload = rocket::pack(metadata, std::move(buf))]() mutable {
        OnWriteSuccess writeCallback(cbRef);
        return rclientPtr->sendRequestResponseSync(
            std::move(requestPayload), timeout, &writeCallback);
      };

  auto finallyFunc = [cb = std::move(cb),
                      g = inflightGuard(),
                      protocolId = static_cast<uint16_t>(
                          metadata.protocol_ref().value_unchecked()),
                      methodName = metadata.name_ref().value_or("")](
                         folly::Try<rocket::Payload>&& payload) mutable {
    if (UNLIKELY(payload.hasException())) {
      cb.release()->onResponseError(std::move(payload.exception()));
      return;
    }

    auto response = rocket::unpack<FirstResponsePayload>(std::move(*payload));
    if (response.hasException()) {
      cb.release()->onResponseError(std::move(response.exception()));
      return;
    }
    if (auto error = processFirstResponse(
            response->metadata, response->payload, protocolId, methodName)) {
      cb.release()->onResponseError(std::move(error));
      return;
    }

    auto tHeader = std::make_unique<transport::THeader>();
    tHeader->setClientType(THRIFT_ROCKET_CLIENT_TYPE);

    detail::fillTHeaderFromResponseRpcMetadata(response->metadata, *tHeader);
    cb.release()->onResponse(ClientReceiveState(
        static_cast<uint16_t>(-1),
        std::move(response->payload),
        std::move(tHeader),
        nullptr));
  };

  if (cbRef.isSync() && folly::fibers::onFiber()) {
    finallyFunc(folly::makeTryWith(std::move(sendRequestFunc)));
  } else {
    auto& fm = getFiberManager();
    fm.addTaskFinallyEager(
        std::move(sendRequestFunc),
        [finallyFunc = std::move(finallyFunc)](
            folly::Try<folly::Try<rocket::Payload>>&& arg) mutable {
          finallyFunc(collapseTry(std::move(arg)));
        });
  }
}

void onResponseError(
    RequestClientCallback::Ptr& cb,
    folly::exception_wrapper ew) {
  cb.release()->onResponseError(std::move(ew));
}

void onResponseError(StreamClientCallback* cb, folly::exception_wrapper ew) {
  cb->onFirstResponseError(std::move(ew));
}

void onResponseError(SinkClientCallback* cb, folly::exception_wrapper ew) {
  cb->onFirstResponseError(std::move(ew));
}

template <typename CallbackPtr>
bool RocketClientChannel::preSendValidation(
    RequestRpcMetadata& metadata,
    const RpcOptions& rpcOptions,
    CallbackPtr& cb,
    std::chrono::milliseconds& firstResponseTimeout) {
  metadata.seqId_ref().reset();
  DCHECK(metadata.kind_ref().has_value());

  if (!rclient_ || !rclient_->isAlive()) {
    onResponseError(
        cb,
        folly::make_exception_wrapper<TTransportException>(
            TTransportException::NOT_OPEN, "Connection is not open"));
    return false;
  }

  if (inflightRequestsAndStreams() >= maxInflightRequestsAndStreams_) {
    TTransportException ex(
        TTransportException::NETWORK_ERROR,
        "Too many active requests on connection");
    // Might be able to create another transaction soon
    ex.setOptions(TTransportException::CHANNEL_IS_VALID);
    onResponseError(cb, std::move(ex));
    return false;
  }

  firstResponseTimeout =
      std::chrono::milliseconds(metadata.clientTimeoutMs_ref().value_or(0));
  if (rpcOptions.getClientOnlyTimeouts()) {
    metadata.clientTimeoutMs_ref().reset();
    metadata.queueTimeoutMs_ref().reset();
  }
  return true;
}

ClientChannel::SaturationStatus RocketClientChannel::getSaturationStatus() {
  DCHECK(evb_ && evb_->isInEventBaseThread());
  return ClientChannel::SaturationStatus(
      inflightRequestsAndStreams(), maxInflightRequestsAndStreams_);
}

void RocketClientChannel::closeNow() {
  DCHECK(!evb_ || evb_->isInEventBaseThread());
  rclient_.reset();
}

void RocketClientChannel::setCloseCallback(CloseCallback* closeCallback) {
  if (rclient_) {
    rclient_->setCloseCallback([closeCallback] {
      if (closeCallback) {
        closeCallback->channelClosed();
      }
    });
  }
}

folly::AsyncTransportWrapper* FOLLY_NULLABLE
RocketClientChannel::getTransport() {
  if (!rclient_) {
    return nullptr;
  }

  auto* transportWrapper = rclient_->getTransportWrapper();
  return transportWrapper
      ? transportWrapper->getUnderlyingTransport<folly::AsyncTransportWrapper>()
      : nullptr;
}

bool RocketClientChannel::good() {
  DCHECK(!evb_ || evb_->isInEventBaseThread());
  return rclient_ && rclient_->isAlive();
}

size_t RocketClientChannel::inflightRequestsAndStreams() const {
  return shared_->inflightRequests + (rclient_ ? rclient_->streams() : 0);
}

void RocketClientChannel::setTimeout(uint32_t timeoutMs) {
  DCHECK(!evb_ || evb_->isInEventBaseThread());
  if (auto* transport = getTransport()) {
    transport->setSendTimeout(timeoutMs);
  }
  timeout_ = std::chrono::milliseconds(timeoutMs);
}

void RocketClientChannel::attachEventBase(folly::EventBase* evb) {
  DCHECK(evb->isInEventBaseThread());
  if (rclient_) {
    rclient_->attachEventBase(*evb);
  }
  evb_ = evb;
}

void RocketClientChannel::detachEventBase() {
  DCHECK(isDetachable());
  DCHECK(getDestructorGuardCount() == 0);

  if (rclient_) {
    rclient_->detachEventBase();
  }
  evb_ = nullptr;
}

bool RocketClientChannel::isDetachable() {
  DCHECK(!evb_ || evb_->isInEventBaseThread());
  auto* transport = getTransport();
  return !evb_ || !transport || !rclient_ || rclient_->isDetachable();
}

void RocketClientChannel::setOnDetachable(
    folly::Function<void()> onDetachable) {
  DCHECK(rclient_);
  ClientChannel::setOnDetachable(std::move(onDetachable));
  rclient_->setOnDetachable([this] {
    if (isDetachable()) {
      notifyDetachable();
    }
  });
}

void RocketClientChannel::unsetOnDetachable() {
  ClientChannel::unsetOnDetachable();
  if (rclient_) {
    rclient_->setOnDetachable(nullptr);
  }
}

constexpr std::chrono::milliseconds RocketClientChannel::kDefaultRpcTimeout;

} // namespace thrift
} // namespace apache
