/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/namespace_from_package/gen-py3/module/services_wrapper.h>
#include <thrift/compiler/test/fixtures/namespace_from_package/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace test {
namespace namespace_from_package {
namespace module {

TestServiceWrapper::TestServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_test__namespace_from_package__module__services();
  }


void TestServiceWrapper::async_tm_init(
  apache::thrift::HandlerCallbackPtr<int64_t> callback
    , int64_t int1
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
int1    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<int64_t>();
        call_cy_TestService_init(
            this->if_object,
            ctx,
            std::move(promise),
            int1        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<int64_t>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> TestServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<TestServiceWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> TestServiceWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_TestService_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> TestServiceWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_TestService_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace test
} // namespace namespace_from_package
} // namespace module
