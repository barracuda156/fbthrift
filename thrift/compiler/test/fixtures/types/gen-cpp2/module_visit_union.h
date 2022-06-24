/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/visit_union.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitUnion<::apache::thrift::fixtures::types::NoExceptMoveUnion> {

  template <typename F, typename T>
  decltype(auto) operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::string_field:
      return f(0, *static_cast<T&&>(t).string_field_ref());
    case Union::Type::i32_field:
      return f(1, *static_cast<T&&>(t).i32_field_ref());
    case Union::Type::__EMPTY__:
      return decltype(f(0, *static_cast<T&&>(t).string_field_ref()))();
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
