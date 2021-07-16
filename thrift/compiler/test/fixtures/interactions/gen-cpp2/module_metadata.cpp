/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::CustomException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.CustomException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_CustomException = res.first->second;
  module_CustomException.name_ref() = "module.CustomException";
  module_CustomException.is_union_ref() = false;
  static const EncodedThriftField
  module_CustomException_fields[] = {
    std::make_tuple(1, "message", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}),
  };
  for (const auto& f : module_CustomException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = std::get<4>(f);
    module_CustomException.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

void ExceptionMetadata<::cpp2::CustomException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions_ref()->emplace("module.CustomException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_CustomException = res.first->second;
  module_CustomException.name_ref() = "module.CustomException";
  static const EncodedThriftField
  module_CustomException_fields[] = {
    std::make_tuple(1, "message", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}),
  };
  for (const auto& f : module_CustomException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_CustomException.fields_ref()->push_back(std::move(field));
  }
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_foo(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "foo";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name_ref() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_foo,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  context.service_info_ref() = std::move(module_MyService);
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
