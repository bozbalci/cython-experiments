# kwargs.pyx: Takes keyword arguments from C and passes it to Python
# functions.

def handler(**kwargs):
    try:
        print("My name is {name}.".format(**kwargs))
    except KeyError:
        print("'name' is not passed to the function.")

    age = kwargs.get("age", -1)
    if age != -1:
        print(f"I am {age} years old.")

# When no type is specified in a cdef function parameter, the resulting
# C code takes it as a PyObject*. Therefore, it is required to build
# a dictionary in C using Py_BuildValue and pass it as a parameter to
# this function, which in turn, calls our Python function, handler().
cdef public void call_handler(kwargs):
    handler(**kwargs)
