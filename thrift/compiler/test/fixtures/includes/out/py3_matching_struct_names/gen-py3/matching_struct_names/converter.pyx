
#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cMyStruct] MyStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.MyStruct?>inst)._cpp_obj


cdef object MyStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyStruct]& c_struct):
    return _fbthrift_ctypes.MyStruct._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cCombo] Combo_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.Combo?>inst)._cpp_obj


cdef object Combo_from_cpp(const shared_ptr[_fbthrift_ctypes.cCombo]& c_struct):
    return _fbthrift_ctypes.Combo._fbthrift_create(c_struct)
