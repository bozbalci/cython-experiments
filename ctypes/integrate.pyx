# Cython wrapper for the functions defined in methods.h
import cython
from cpython.ref cimport PyObject

cdef extern from "get_ptr.h":
    void *get_ctypes_function_pointer(PyObject *obj)

cdef extern from "methods.h":
    typedef double (*real_func)(double x)

    double trapezoid(void *, int, double, double)
    double simpson(real_func, int, double, double)

def Trapezoid(func, intervals, start, end):
    # XXX: Complete this part!
    return trapezoid(get_ctypes_function_pointer(<PyObject*>func),
        intervals, start, end)

def Simpson(func, intervals, start, end):
    # TODO: Implement this!
    pass
