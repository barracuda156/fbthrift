#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder


import test.fixtures.enumstrict.module.types as _test_fixtures_enumstrict_module_types


_fbthrift_struct_type__MyStruct = _test_fixtures_enumstrict_module_types.MyStruct
class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__MyStruct

    def __init__(self):
        self.myEnum: _typing.Optional[_test_fixtures_enumstrict_module_types.MyEnum] = None
        self.myBigEnum: _typing.Optional[_test_fixtures_enumstrict_module_types.MyBigEnum] = None

    def __iter__(self):
        yield "myEnum", self.myEnum
        yield "myBigEnum", self.myBigEnum

