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

cimport c.types as _c_types

cimport b.types as _b_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __ListSpec get_reflection__List__c_C():
    return __ListSpec._fbthrift_create(
        value=_c_types.C,
        kind=__NumberType.NOT_A_NUMBER,
    )

