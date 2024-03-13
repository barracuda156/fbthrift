/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.thrift.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;
import reactor.core.publisher.Mono;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("FB303Service")
public interface FB303Service extends java.io.Closeable, com.facebook.thrift.util.BlockingService {
    static com.facebook.thrift.server.RpcServerHandlerBuilder<FB303Service> serverHandlerBuilder(FB303Service _serverImpl) {
        return new com.facebook.thrift.server.RpcServerHandlerBuilder<FB303Service>(_serverImpl) {
                @java.lang.Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                return new FB303ServiceRpcServerHandler(impl, eventHandlers);
            }
        };
    }

    static com.facebook.thrift.client.ClientBuilder<FB303Service> clientBuilder() {
        return new ClientBuilder<FB303Service>() {
            @java.lang.Override
            public FB303Service build(Mono<RpcClient> rpcClientMono) {
                FB303Service.Reactive _delegate =
                    new FB303ServiceReactiveClient(protocolId, rpcClientMono, headersMono, persistentHeadersMono);
                return new FB303ServiceReactiveBlockingWrapper(_delegate);
            }
        };
    }

    @com.facebook.swift.service.ThriftService("FB303Service")
    public interface Async extends java.io.Closeable, com.facebook.thrift.util.AsyncService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<FB303Service.Async> serverHandlerBuilder(FB303Service.Async _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<FB303Service.Async>(_serverImpl) {
                @java.lang.Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new FB303ServiceRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<FB303Service.Async> clientBuilder() {
            return new ClientBuilder<FB303Service.Async>() {
                @java.lang.Override
                public FB303Service.Async build(Mono<RpcClient> rpcClientMono) {
                    FB303Service.Reactive _delegate =
                        new FB303ServiceReactiveClient(protocolId, rpcClientMono, headersMono, persistentHeadersMono);
                    return new FB303ServiceReactiveAsyncWrapper(_delegate);
                }
            };
        }

        @java.lang.Override void close();

        @ThriftMethod(value = "simple_rpc")
        ListenableFuture<test.fixtures.basic.ReservedKeyword> simpleRpc(
            @com.facebook.swift.codec.ThriftField(value=1, name="int_parameter", requiredness=Requiredness.NONE) final int intParameter);

        default ListenableFuture<test.fixtures.basic.ReservedKeyword> simpleRpc(
            @com.facebook.swift.codec.ThriftField(value=1, name="int_parameter", requiredness=Requiredness.NONE) final int intParameter,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<test.fixtures.basic.ReservedKeyword>> simpleRpcWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="int_parameter", requiredness=Requiredness.NONE) final int intParameter,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "simple_rpc")
    test.fixtures.basic.ReservedKeyword simpleRpc(
        @com.facebook.swift.codec.ThriftField(value=1, name="int_parameter", requiredness=Requiredness.NONE) final int intParameter) throws org.apache.thrift.TException;

    default test.fixtures.basic.ReservedKeyword simpleRpc(
        @com.facebook.swift.codec.ThriftField(value=1, name="int_parameter", requiredness=Requiredness.NONE) final int intParameter,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<test.fixtures.basic.ReservedKeyword> simpleRpcWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="int_parameter", requiredness=Requiredness.NONE) final int intParameter,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("FB303Service")
    interface Reactive extends reactor.core.Disposable, com.facebook.thrift.util.ReactiveService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<FB303Service.Reactive> serverHandlerBuilder(FB303Service.Reactive _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<FB303Service.Reactive>(_serverImpl) {
                @java.lang.Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new FB303ServiceRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<FB303Service.Reactive> clientBuilder() {
            return new ClientBuilder<FB303Service.Reactive>() {
                @java.lang.Override
                public FB303Service.Reactive build(Mono<RpcClient> rpcClientMono) {
                    return new FB303ServiceReactiveClient(protocolId, rpcClientMono, headersMono, persistentHeadersMono);
                }
            };
        }

        @ThriftMethod(value = "simple_rpc")
        reactor.core.publisher.Mono<test.fixtures.basic.ReservedKeyword> simpleRpc(final int intParameter);

        default reactor.core.publisher.Mono<test.fixtures.basic.ReservedKeyword> simpleRpc(final int intParameter, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<test.fixtures.basic.ReservedKeyword>> simpleRpcWrapper(final int intParameter, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}