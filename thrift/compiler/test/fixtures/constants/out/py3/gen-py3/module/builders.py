#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.builder


import module.types as _module_types


_fbthrift_struct_type__Internship = _module_types.Internship
class Internship_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__Internship

    def __init__(self):
        self.weeks: _typing.Optional[int] = None
        self.title: _typing.Optional[str] = None
        self.employer: _typing.Optional[_module_types.Company] = None
        self.compensation: _typing.Optional[float] = None
        self.school: _typing.Optional[str] = None

    def __iter__(self):
        yield "weeks", self.weeks
        yield "title", self.title
        yield "employer", self.employer
        yield "compensation", self.compensation
        yield "school", self.school

_fbthrift_struct_type__Range = _module_types.Range
class Range_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__Range

    def __init__(self):
        self.min: _typing.Optional[int] = None
        self.max: _typing.Optional[int] = None

    def __iter__(self):
        yield "min", self.min
        yield "max", self.max

_fbthrift_struct_type__struct1 = _module_types.struct1
class struct1_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__struct1

    def __init__(self):
        self.a: _typing.Optional[int] = None
        self.b: _typing.Optional[str] = None

    def __iter__(self):
        yield "a", self.a
        yield "b", self.b

_fbthrift_struct_type__struct2 = _module_types.struct2
class struct2_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__struct2

    def __init__(self):
        self.a: _typing.Optional[int] = None
        self.b: _typing.Optional[str] = None
        self.c: _typing.Any = None
        self.d: _typing.Optional[list] = None

    def __iter__(self):
        yield "a", self.a
        yield "b", self.b
        yield "c", self.c
        yield "d", self.d

_fbthrift_struct_type__struct3 = _module_types.struct3
class struct3_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__struct3

    def __init__(self):
        self.a: _typing.Optional[str] = None
        self.b: _typing.Optional[int] = None
        self.c: _typing.Any = None

    def __iter__(self):
        yield "a", self.a
        yield "b", self.b
        yield "c", self.c

_fbthrift_struct_type__struct4 = _module_types.struct4
class struct4_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__struct4

    def __init__(self):
        self.a: _typing.Optional[int] = None
        self.b: _typing.Optional[float] = None
        self.c: _typing.Optional[int] = None

    def __iter__(self):
        yield "a", self.a
        yield "b", self.b
        yield "c", self.c

_fbthrift_struct_type__union1 = _module_types.union1
class union1_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__union1

    def __init__(self):
        self.i: _typing.Optional[int] = None
        self.d: _typing.Optional[float] = None

    def __iter__(self):
        yield "i", self.i
        yield "d", self.d

_fbthrift_struct_type__union2 = _module_types.union2
class union2_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _fbthrift_struct_type__union2

    def __init__(self):
        self.i: _typing.Optional[int] = None
        self.d: _typing.Optional[float] = None
        self.s: _typing.Any = None
        self.u: _typing.Any = None

    def __iter__(self):
        yield "i", self.i
        yield "d", self.d
        yield "s", self.s
        yield "u", self.u

