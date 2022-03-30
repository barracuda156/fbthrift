#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)

cimport facebook.thrift.annotation.meta.types as _facebook_thrift_annotation_meta_types
cimport foo.types as _foo_types

cimport module.types as _module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__Fields():
    cdef _module_types.Fields defaults = _module_types.Fields._fbthrift_create(
        constant_shared_ptr[_module_types.cFields](
            default_inst[_module_types.cFields]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="Fields",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=100,
            name="injected_field",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__FieldsInjectedToEmptyStruct():
    cdef _module_types.FieldsInjectedToEmptyStruct defaults = _module_types.FieldsInjectedToEmptyStruct._fbthrift_create(
        constant_shared_ptr[_module_types.cFieldsInjectedToEmptyStruct](
            default_inst[_module_types.cFieldsInjectedToEmptyStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="FieldsInjectedToEmptyStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=100,
            name="injected_field",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__FieldsInjectedToStruct():
    cdef _module_types.FieldsInjectedToStruct defaults = _module_types.FieldsInjectedToStruct._fbthrift_create(
        constant_shared_ptr[_module_types.cFieldsInjectedToStruct](
            default_inst[_module_types.cFieldsInjectedToStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="FieldsInjectedToStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="string_field",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=100,
            name="injected_field",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__FieldsInjectedWithIncludedStruct():
    cdef _module_types.FieldsInjectedWithIncludedStruct defaults = _module_types.FieldsInjectedWithIncludedStruct._fbthrift_create(
        constant_shared_ptr[_module_types.cFieldsInjectedWithIncludedStruct](
            default_inst[_module_types.cFieldsInjectedWithIncludedStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="FieldsInjectedWithIncludedStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="string_field",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=100,
            name="injected_field",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
