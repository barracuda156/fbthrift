
#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cMyUnion] MyUnion_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.MyUnion?>inst)._cpp_obj


cdef object MyUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyUnion]& c_struct):
    return _fbthrift_ctypes.MyUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cNonTriviallyDestructibleUnion] NonTriviallyDestructibleUnion_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.NonTriviallyDestructibleUnion?>inst)._cpp_obj


cdef object NonTriviallyDestructibleUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cNonTriviallyDestructibleUnion]& c_struct):
    return _fbthrift_ctypes.NonTriviallyDestructibleUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cMyField] MyField_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.MyField?>inst)._cpp_obj


cdef object MyField_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyField]& c_struct):
    return _fbthrift_ctypes.MyField._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cMyStruct] MyStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.MyStruct?>inst)._cpp_obj


cdef object MyStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyStruct]& c_struct):
    return _fbthrift_ctypes.MyStruct._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithUnion] StructWithUnion_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithUnion?>inst)._cpp_obj


cdef object StructWithUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithUnion]& c_struct):
    return _fbthrift_ctypes.StructWithUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cRecursiveStruct] RecursiveStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.RecursiveStruct?>inst)._cpp_obj


cdef object RecursiveStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cRecursiveStruct]& c_struct):
    return _fbthrift_ctypes.RecursiveStruct._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithContainers] StructWithContainers_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithContainers?>inst)._cpp_obj


cdef object StructWithContainers_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithContainers]& c_struct):
    return _fbthrift_ctypes.StructWithContainers._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithSharedConst] StructWithSharedConst_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithSharedConst?>inst)._cpp_obj


cdef object StructWithSharedConst_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithSharedConst]& c_struct):
    return _fbthrift_ctypes.StructWithSharedConst._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cEmpty] Empty_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.Empty?>inst)._cpp_obj


cdef object Empty_from_cpp(const shared_ptr[_fbthrift_ctypes.cEmpty]& c_struct):
    return _fbthrift_ctypes.Empty._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithRef] StructWithRef_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithRef?>inst)._cpp_obj


cdef object StructWithRef_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithRef]& c_struct):
    return _fbthrift_ctypes.StructWithRef._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithBox] StructWithBox_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithBox?>inst)._cpp_obj


cdef object StructWithBox_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithBox]& c_struct):
    return _fbthrift_ctypes.StructWithBox._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithInternBox] StructWithInternBox_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithInternBox?>inst)._cpp_obj


cdef object StructWithInternBox_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithInternBox]& c_struct):
    return _fbthrift_ctypes.StructWithInternBox._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithTerseInternBox] StructWithTerseInternBox_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithTerseInternBox?>inst)._cpp_obj


cdef object StructWithTerseInternBox_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithTerseInternBox]& c_struct):
    return _fbthrift_ctypes.StructWithTerseInternBox._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cAdaptedStructWithInternBox] AdaptedStructWithInternBox_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.AdaptedStructWithInternBox?>inst)._cpp_obj


cdef object AdaptedStructWithInternBox_from_cpp(const shared_ptr[_fbthrift_ctypes.cAdaptedStructWithInternBox]& c_struct):
    return _fbthrift_ctypes.AdaptedStructWithInternBox._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cAdaptedStructWithTerseInternBox] AdaptedStructWithTerseInternBox_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.AdaptedStructWithTerseInternBox?>inst)._cpp_obj


cdef object AdaptedStructWithTerseInternBox_from_cpp(const shared_ptr[_fbthrift_ctypes.cAdaptedStructWithTerseInternBox]& c_struct):
    return _fbthrift_ctypes.AdaptedStructWithTerseInternBox._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithRefTypeUnique] StructWithRefTypeUnique_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithRefTypeUnique?>inst)._cpp_obj


cdef object StructWithRefTypeUnique_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithRefTypeUnique]& c_struct):
    return _fbthrift_ctypes.StructWithRefTypeUnique._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithRefTypeShared] StructWithRefTypeShared_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithRefTypeShared?>inst)._cpp_obj


cdef object StructWithRefTypeShared_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithRefTypeShared]& c_struct):
    return _fbthrift_ctypes.StructWithRefTypeShared._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithRefTypeSharedConst] StructWithRefTypeSharedConst_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithRefTypeSharedConst?>inst)._cpp_obj


cdef object StructWithRefTypeSharedConst_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithRefTypeSharedConst]& c_struct):
    return _fbthrift_ctypes.StructWithRefTypeSharedConst._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithRefAndAnnotCppNoexceptMoveCtor] StructWithRefAndAnnotCppNoexceptMoveCtor_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithRefAndAnnotCppNoexceptMoveCtor?>inst)._cpp_obj


cdef object StructWithRefAndAnnotCppNoexceptMoveCtor_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithRefAndAnnotCppNoexceptMoveCtor]& c_struct):
    return _fbthrift_ctypes.StructWithRefAndAnnotCppNoexceptMoveCtor._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cStructWithString] StructWithString_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.StructWithString?>inst)._cpp_obj


cdef object StructWithString_from_cpp(const shared_ptr[_fbthrift_ctypes.cStructWithString]& c_struct):
    return _fbthrift_ctypes.StructWithString._fbthrift_create(c_struct)
