/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/service3.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/service3.tcc"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace test_cpp2 { namespace cpp_reflection {
std::unique_ptr<apache::thrift::AsyncProcessor> service3SvIf::getProcessor() {
  return std::make_unique<service3AsyncProcessor>(this);
}

service3SvIf::CreateMethodMetadataResult service3SvIf::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<service3AsyncProcessor>();
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> service3SvIf::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

  service3ServiceInfoHolder service3SvIf::__fbthrift_serviceInfoHolder;


void service3SvIf::methodA() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodA");
}

folly::SemiFuture<folly::Unit> service3SvIf::semifuture_methodA() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodA.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  methodA();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> service3SvIf::future_methodA() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodA.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodA(), getInternalKeepAlive());
}

void service3SvIf::async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodA.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodA.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodA();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodA();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        methodA();
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void service3SvIf::methodB(::std::int32_t /*x*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodB");
}

folly::SemiFuture<folly::Unit> service3SvIf::semifuture_methodB(::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodB.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  methodB(p_x, std::move(p_y), p_z);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> service3SvIf::future_methodB(::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodB.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodB(p_x, std::move(p_y), p_z), getInternalKeepAlive());
}

void service3SvIf::async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodB.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodB.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodB(p_x, std::move(p_y), p_z);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodB(p_x, std::move(p_y), p_z);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        methodB(p_x, std::move(p_y), p_z);
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::std::int32_t service3SvIf::methodC() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodC");
}

folly::SemiFuture<::std::int32_t> service3SvIf::semifuture_methodC() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodC.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return methodC();
}

folly::Future<::std::int32_t> service3SvIf::future_methodC() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodC.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodC(), getInternalKeepAlive());
}

void service3SvIf::async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodC.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodC.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodC();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodC();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(methodC());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::std::int32_t service3SvIf::methodD(::std::int32_t /*i*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodD");
}

folly::SemiFuture<::std::int32_t> service3SvIf::semifuture_methodD(::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodD.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return methodD(p_i, std::move(p_j), p_k);
}

folly::Future<::std::int32_t> service3SvIf::future_methodD(::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodD.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodD(p_i, std::move(p_j), p_k), getInternalKeepAlive());
}

void service3SvIf::async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback, ::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodD.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodD.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodD(p_i, std::move(p_j), p_k);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodD(p_i, std::move(p_j), p_k);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(methodD(p_i, std::move(p_j), p_k));
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void service3SvIf::methodE(::test_cpp2::cpp_reflection::struct2& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodE");
}

folly::SemiFuture<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> service3SvIf::semifuture_methodE() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodE.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::test_cpp2::cpp_reflection::struct2>();
  methodE(*ret);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> service3SvIf::future_methodE() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodE.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodE(), getInternalKeepAlive());
}

void service3SvIf::async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodE.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodE.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodE();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodE();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::test_cpp2::cpp_reflection::struct2 _return;
        methodE(_return);
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void service3SvIf::methodF(::test_cpp2::cpp_reflection::struct3& /*_return*/, ::std::int32_t /*l*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("methodF");
}

folly::SemiFuture<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>> service3SvIf::semifuture_methodF(::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_methodF.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::test_cpp2::cpp_reflection::struct3>();
  methodF(*ret, p_l, std::move(p_m), p_n);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>> service3SvIf::future_methodF(::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_methodF.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_methodF(p_l, std::move(p_m), p_n), getInternalKeepAlive());
}

void service3SvIf::async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::test_cpp2::cpp_reflection::struct3>>> callback, ::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_methodF.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_methodF.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_methodF(p_l, std::move(p_m), p_n);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_methodF(p_l, std::move(p_m), p_n);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::test_cpp2::cpp_reflection::struct3 _return;
        methodF(_return, p_l, std::move(p_m), p_n);
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void service3SvNull::methodA() {
  return;
}

void service3SvNull::methodB(::std::int32_t /*x*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {
  return;
}

::std::int32_t service3SvNull::methodC() {
  return 0;
}

::std::int32_t service3SvNull::methodD(::std::int32_t /*i*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  return 0;
}

void service3SvNull::methodE(::test_cpp2::cpp_reflection::struct2& /*_return*/) {}

void service3SvNull::methodF(::test_cpp2::cpp_reflection::struct3& /*_return*/, ::std::int32_t /*l*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {}



const char* service3AsyncProcessor::getServiceName() {
  return "service3";
}

void service3AsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<service3SvIf>::gen(response);
}

void service3AsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void service3AsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

const service3AsyncProcessor::ProcessMap& service3AsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const service3AsyncProcessor::ProcessMap service3AsyncProcessor::kOwnProcessMap_ {
  {"methodA", {&service3AsyncProcessor::setUpAndProcess_methodA<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &service3AsyncProcessor::setUpAndProcess_methodA<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodB", {&service3AsyncProcessor::setUpAndProcess_methodB<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &service3AsyncProcessor::setUpAndProcess_methodB<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodC", {&service3AsyncProcessor::setUpAndProcess_methodC<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &service3AsyncProcessor::setUpAndProcess_methodC<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodD", {&service3AsyncProcessor::setUpAndProcess_methodD<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &service3AsyncProcessor::setUpAndProcess_methodD<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodE", {&service3AsyncProcessor::setUpAndProcess_methodE<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &service3AsyncProcessor::setUpAndProcess_methodE<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"methodF", {&service3AsyncProcessor::setUpAndProcess_methodF<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>, &service3AsyncProcessor::setUpAndProcess_methodF<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& service3ServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap service3ServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"methodA",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "service3.methodA",
     std::nullopt}},
  {"methodB",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "service3.methodB",
     std::nullopt}},
  {"methodC",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "service3.methodC",
     std::nullopt}},
  {"methodD",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "service3.methodD",
     std::nullopt}},
  {"methodE",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "service3.methodE",
     std::nullopt}},
  {"methodF",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "service3.methodF",
     std::nullopt}},
  };

  return requestInfoMap;
}
}} // test_cpp2::cpp_reflection
