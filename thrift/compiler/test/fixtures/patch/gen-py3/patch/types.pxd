#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional
cimport facebook.thrift.annotation.scope.types as _facebook_thrift_annotation_scope_types
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport patch.types_fields as _fbthrift_types_fields

cdef extern from "thrift/lib/thrift/gen-py3/patch/types.h":
  pass

cdef extern from "thrift/lib/cpp2/op/detail/Patch.h":
  pass
cdef extern from *:
    ctypedef bstring _folly_IOBuf "::folly::IOBuf"




cdef extern from "thrift/lib/thrift/gen-cpp2/patch_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/lib/thrift/gen-cpp2/patch_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/lib/thrift/gen-cpp2/patch_types_custom_protocol.h" namespace "::apache::thrift::op":

    cdef cppclass cGeneratePatch "::apache::thrift::op::GeneratePatch":
        cGeneratePatch() except +
        cGeneratePatch(const cGeneratePatch&) except +
        bint operator==(cGeneratePatch&)
        bint operator!=(cGeneratePatch&)
        bint operator<(cGeneratePatch&)
        bint operator>(cGeneratePatch&)
        bint operator<=(cGeneratePatch&)
        bint operator>=(cGeneratePatch&)


    cdef cppclass cGenerateOptionalPatch "::apache::thrift::op::GenerateOptionalPatch":
        cGenerateOptionalPatch() except +
        cGenerateOptionalPatch(const cGenerateOptionalPatch&) except +
        bint operator==(cGenerateOptionalPatch&)
        bint operator!=(cGenerateOptionalPatch&)
        bint operator<(cGenerateOptionalPatch&)
        bint operator>(cGenerateOptionalPatch&)
        bint operator<=(cGenerateOptionalPatch&)
        bint operator>=(cGenerateOptionalPatch&)


    cdef cppclass cBoolPatch "::apache::thrift::op::BoolPatch":
        cBoolPatch() except +
        cBoolPatch(const cBoolPatch&) except +
        bint operator==(cBoolPatch&)
        bint operator!=(cBoolPatch&)
        bint operator<(cBoolPatch&)
        bint operator>(cBoolPatch&)
        bint operator<=(cBoolPatch&)
        bint operator>=(cBoolPatch&)
        __optional_field_ref[cbool] assign_ref()


    cdef cppclass cBytePatch "::apache::thrift::op::BytePatch":
        cBytePatch() except +
        cBytePatch(const cBytePatch&) except +
        bint operator==(cBytePatch&)
        bint operator!=(cBytePatch&)
        bint operator<(cBytePatch&)
        bint operator>(cBytePatch&)
        bint operator<=(cBytePatch&)
        bint operator>=(cBytePatch&)
        __optional_field_ref[cint8_t] assign_ref()


    cdef cppclass cI16Patch "::apache::thrift::op::I16Patch":
        cI16Patch() except +
        cI16Patch(const cI16Patch&) except +
        bint operator==(cI16Patch&)
        bint operator!=(cI16Patch&)
        bint operator<(cI16Patch&)
        bint operator>(cI16Patch&)
        bint operator<=(cI16Patch&)
        bint operator>=(cI16Patch&)
        __optional_field_ref[cint16_t] assign_ref()


    cdef cppclass cI32Patch "::apache::thrift::op::I32Patch":
        cI32Patch() except +
        cI32Patch(const cI32Patch&) except +
        bint operator==(cI32Patch&)
        bint operator!=(cI32Patch&)
        bint operator<(cI32Patch&)
        bint operator>(cI32Patch&)
        bint operator<=(cI32Patch&)
        bint operator>=(cI32Patch&)
        __optional_field_ref[cint32_t] assign_ref()


    cdef cppclass cI64Patch "::apache::thrift::op::I64Patch":
        cI64Patch() except +
        cI64Patch(const cI64Patch&) except +
        bint operator==(cI64Patch&)
        bint operator!=(cI64Patch&)
        bint operator<(cI64Patch&)
        bint operator>(cI64Patch&)
        bint operator<=(cI64Patch&)
        bint operator>=(cI64Patch&)
        __optional_field_ref[cint64_t] assign_ref()


    cdef cppclass cFloatPatch "::apache::thrift::op::FloatPatch":
        cFloatPatch() except +
        cFloatPatch(const cFloatPatch&) except +
        bint operator==(cFloatPatch&)
        bint operator!=(cFloatPatch&)
        bint operator<(cFloatPatch&)
        bint operator>(cFloatPatch&)
        bint operator<=(cFloatPatch&)
        bint operator>=(cFloatPatch&)
        __optional_field_ref[float] assign_ref()


    cdef cppclass cDoublePatch "::apache::thrift::op::DoublePatch":
        cDoublePatch() except +
        cDoublePatch(const cDoublePatch&) except +
        bint operator==(cDoublePatch&)
        bint operator!=(cDoublePatch&)
        bint operator<(cDoublePatch&)
        bint operator>(cDoublePatch&)
        bint operator<=(cDoublePatch&)
        bint operator>=(cDoublePatch&)
        __optional_field_ref[double] assign_ref()


    cdef cppclass cStringPatch "::apache::thrift::op::StringPatch":
        cStringPatch() except +
        cStringPatch(const cStringPatch&) except +
        bint operator==(cStringPatch&)
        bint operator!=(cStringPatch&)
        bint operator<(cStringPatch&)
        bint operator>(cStringPatch&)
        bint operator<=(cStringPatch&)
        bint operator>=(cStringPatch&)
        __optional_field_ref[string] assign_ref()


    cdef cppclass cBinaryPatch "::apache::thrift::op::BinaryPatch":
        cBinaryPatch() except +
        cBinaryPatch(const cBinaryPatch&) except +
        bint operator==(cBinaryPatch&)
        bint operator!=(cBinaryPatch&)
        bint operator<(cBinaryPatch&)
        bint operator>(cBinaryPatch&)
        bint operator<=(cBinaryPatch&)
        bint operator>=(cBinaryPatch&)
        __optional_field_ref[_folly_IOBuf] assign_ref()


    cdef cppclass cOptionalBoolPatch "::apache::thrift::op::OptionalBoolPatch":
        cOptionalBoolPatch() except +
        cOptionalBoolPatch(const cOptionalBoolPatch&) except +
        bint operator==(cOptionalBoolPatch&)
        bint operator!=(cOptionalBoolPatch&)
        bint operator<(cOptionalBoolPatch&)
        bint operator>(cOptionalBoolPatch&)
        bint operator<=(cOptionalBoolPatch&)
        bint operator>=(cOptionalBoolPatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cBoolPatch] patch_ref()
        __optional_field_ref[cbool] ensure_ref()
        __field_ref[cBoolPatch] patchAfter_ref()


    cdef cppclass cOptionalBytePatch "::apache::thrift::op::OptionalBytePatch":
        cOptionalBytePatch() except +
        cOptionalBytePatch(const cOptionalBytePatch&) except +
        bint operator==(cOptionalBytePatch&)
        bint operator!=(cOptionalBytePatch&)
        bint operator<(cOptionalBytePatch&)
        bint operator>(cOptionalBytePatch&)
        bint operator<=(cOptionalBytePatch&)
        bint operator>=(cOptionalBytePatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cBytePatch] patch_ref()
        __optional_field_ref[cint8_t] ensure_ref()
        __field_ref[cBytePatch] patchAfter_ref()


    cdef cppclass cOptionalI16Patch "::apache::thrift::op::OptionalI16Patch":
        cOptionalI16Patch() except +
        cOptionalI16Patch(const cOptionalI16Patch&) except +
        bint operator==(cOptionalI16Patch&)
        bint operator!=(cOptionalI16Patch&)
        bint operator<(cOptionalI16Patch&)
        bint operator>(cOptionalI16Patch&)
        bint operator<=(cOptionalI16Patch&)
        bint operator>=(cOptionalI16Patch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cI16Patch] patch_ref()
        __optional_field_ref[cint16_t] ensure_ref()
        __field_ref[cI16Patch] patchAfter_ref()


    cdef cppclass cOptionalI32Patch "::apache::thrift::op::OptionalI32Patch":
        cOptionalI32Patch() except +
        cOptionalI32Patch(const cOptionalI32Patch&) except +
        bint operator==(cOptionalI32Patch&)
        bint operator!=(cOptionalI32Patch&)
        bint operator<(cOptionalI32Patch&)
        bint operator>(cOptionalI32Patch&)
        bint operator<=(cOptionalI32Patch&)
        bint operator>=(cOptionalI32Patch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cI32Patch] patch_ref()
        __optional_field_ref[cint32_t] ensure_ref()
        __field_ref[cI32Patch] patchAfter_ref()


    cdef cppclass cOptionalI64Patch "::apache::thrift::op::OptionalI64Patch":
        cOptionalI64Patch() except +
        cOptionalI64Patch(const cOptionalI64Patch&) except +
        bint operator==(cOptionalI64Patch&)
        bint operator!=(cOptionalI64Patch&)
        bint operator<(cOptionalI64Patch&)
        bint operator>(cOptionalI64Patch&)
        bint operator<=(cOptionalI64Patch&)
        bint operator>=(cOptionalI64Patch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cI64Patch] patch_ref()
        __optional_field_ref[cint64_t] ensure_ref()
        __field_ref[cI64Patch] patchAfter_ref()


    cdef cppclass cOptionalFloatPatch "::apache::thrift::op::OptionalFloatPatch":
        cOptionalFloatPatch() except +
        cOptionalFloatPatch(const cOptionalFloatPatch&) except +
        bint operator==(cOptionalFloatPatch&)
        bint operator!=(cOptionalFloatPatch&)
        bint operator<(cOptionalFloatPatch&)
        bint operator>(cOptionalFloatPatch&)
        bint operator<=(cOptionalFloatPatch&)
        bint operator>=(cOptionalFloatPatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cFloatPatch] patch_ref()
        __optional_field_ref[float] ensure_ref()
        __field_ref[cFloatPatch] patchAfter_ref()


    cdef cppclass cOptionalDoublePatch "::apache::thrift::op::OptionalDoublePatch":
        cOptionalDoublePatch() except +
        cOptionalDoublePatch(const cOptionalDoublePatch&) except +
        bint operator==(cOptionalDoublePatch&)
        bint operator!=(cOptionalDoublePatch&)
        bint operator<(cOptionalDoublePatch&)
        bint operator>(cOptionalDoublePatch&)
        bint operator<=(cOptionalDoublePatch&)
        bint operator>=(cOptionalDoublePatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cDoublePatch] patch_ref()
        __optional_field_ref[double] ensure_ref()
        __field_ref[cDoublePatch] patchAfter_ref()


    cdef cppclass cOptionalStringPatch "::apache::thrift::op::OptionalStringPatch":
        cOptionalStringPatch() except +
        cOptionalStringPatch(const cOptionalStringPatch&) except +
        bint operator==(cOptionalStringPatch&)
        bint operator!=(cOptionalStringPatch&)
        bint operator<(cOptionalStringPatch&)
        bint operator>(cOptionalStringPatch&)
        bint operator<=(cOptionalStringPatch&)
        bint operator>=(cOptionalStringPatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cStringPatch] patch_ref()
        __optional_field_ref[string] ensure_ref()
        __field_ref[cStringPatch] patchAfter_ref()


    cdef cppclass cOptionalBinaryPatch "::apache::thrift::op::OptionalBinaryPatch":
        cOptionalBinaryPatch() except +
        cOptionalBinaryPatch(const cOptionalBinaryPatch&) except +
        bint operator==(cOptionalBinaryPatch&)
        bint operator!=(cOptionalBinaryPatch&)
        bint operator<(cOptionalBinaryPatch&)
        bint operator>(cOptionalBinaryPatch&)
        bint operator<=(cOptionalBinaryPatch&)
        bint operator>=(cOptionalBinaryPatch&)
        __field_ref[cbool] clear_ref()
        __field_ref[cBinaryPatch] patch_ref()
        __optional_field_ref[_folly_IOBuf] ensure_ref()
        __field_ref[cBinaryPatch] patchAfter_ref()




cdef class GeneratePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cGeneratePatch] _cpp_obj
    cdef _fbthrift_types_fields.__GeneratePatch_FieldsSetter _fields_setter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cGeneratePatch])



cdef class GenerateOptionalPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cGenerateOptionalPatch] _cpp_obj
    cdef _fbthrift_types_fields.__GenerateOptionalPatch_FieldsSetter _fields_setter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cGenerateOptionalPatch])



cdef class BoolPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cBoolPatch] _cpp_obj
    cdef _fbthrift_types_fields.__BoolPatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object invert_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBoolPatch])



cdef class BytePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cBytePatch] _cpp_obj
    cdef _fbthrift_types_fields.__BytePatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object add_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBytePatch])



cdef class I16Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cI16Patch] _cpp_obj
    cdef _fbthrift_types_fields.__I16Patch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object add_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cI16Patch])



cdef class I32Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cI32Patch] _cpp_obj
    cdef _fbthrift_types_fields.__I32Patch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object add_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cI32Patch])



cdef class I64Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cI64Patch] _cpp_obj
    cdef _fbthrift_types_fields.__I64Patch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object add_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cI64Patch])



cdef class FloatPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cFloatPatch] _cpp_obj
    cdef _fbthrift_types_fields.__FloatPatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object add_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFloatPatch])



cdef class DoublePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cDoublePatch] _cpp_obj
    cdef _fbthrift_types_fields.__DoublePatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object add_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cDoublePatch])



cdef class StringPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cStringPatch] _cpp_obj
    cdef _fbthrift_types_fields.__StringPatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)
    cdef inline object clear_impl(self)
    cdef inline object prepend_impl(self)
    cdef inline object append_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cStringPatch])



cdef class BinaryPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cBinaryPatch] _cpp_obj
    cdef _fbthrift_types_fields.__BinaryPatch_FieldsSetter _fields_setter
    cdef inline object assign_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBinaryPatch])



cdef class OptionalBoolPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalBoolPatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalBoolPatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef BoolPatch __fbthrift_cached_patch
    cdef BoolPatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalBoolPatch])



cdef class OptionalBytePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalBytePatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalBytePatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef BytePatch __fbthrift_cached_patch
    cdef BytePatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalBytePatch])



cdef class OptionalI16Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalI16Patch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalI16Patch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef I16Patch __fbthrift_cached_patch
    cdef I16Patch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalI16Patch])



cdef class OptionalI32Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalI32Patch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalI32Patch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef I32Patch __fbthrift_cached_patch
    cdef I32Patch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalI32Patch])



cdef class OptionalI64Patch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalI64Patch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalI64Patch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef I64Patch __fbthrift_cached_patch
    cdef I64Patch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalI64Patch])



cdef class OptionalFloatPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalFloatPatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalFloatPatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef FloatPatch __fbthrift_cached_patch
    cdef FloatPatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalFloatPatch])



cdef class OptionalDoublePatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalDoublePatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalDoublePatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef DoublePatch __fbthrift_cached_patch
    cdef DoublePatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalDoublePatch])



cdef class OptionalStringPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalStringPatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalStringPatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef StringPatch __fbthrift_cached_patch
    cdef StringPatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalStringPatch])



cdef class OptionalBinaryPatch(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalBinaryPatch] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalBinaryPatch_FieldsSetter _fields_setter
    cdef inline object clear_impl(self)
    cdef inline object patch_impl(self)
    cdef inline object ensure_impl(self)
    cdef inline object patchAfter_impl(self)
    cdef BinaryPatch __fbthrift_cached_patch
    cdef BinaryPatch __fbthrift_cached_patchAfter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalBinaryPatch])



