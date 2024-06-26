/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/includes/gen-cpp2/MyService.h>)
#include <thrift/compiler/test/fixtures/includes/gen-cpp2/MyService.h>
#else
#include <thrift/compiler/test/fixtures/includes/gen-cpp2/service_handlers.h>
#endif
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class MyServiceWrapper : virtual public MyServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit MyServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_query(apache::thrift::HandlerCallbackPtr<void> callback
        , std::unique_ptr<::cpp2::MyStruct> s
        , std::unique_ptr<::cpp2::Included> i
    ) override;
    void async_tm_has_arg_docs(apache::thrift::HandlerCallbackPtr<void> callback
        , std::unique_ptr<::cpp2::MyStruct> s
        , std::unique_ptr<::cpp2::Included> i
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
