/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/any/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

namespace facebook { namespace thrift { namespace compiler { namespace test { namespace fixtures { namespace any {
// Call all static init functions.
//
// If this file is always linked (e.g. link_whole), it will force
// static linking to include the intialization logic.
void __fbthrift_static_init_MyStruct();
void __fbthrift_static_init_MyUnion();
void __fbthrift_static_init_MyException();
namespace {
struct StaticInit {
  StaticInit() {
    __fbthrift_static_init_MyStruct();
    __fbthrift_static_init_MyUnion();
    __fbthrift_static_init_MyException();
  }
};

StaticInit staticInit;
}

}}}}}} // facebook::thrift::compiler::test::fixtures::any
