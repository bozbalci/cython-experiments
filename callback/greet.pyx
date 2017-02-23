cdef extern from "greeter.h":
    ctypedef void (*greetfunc)(char *name, void *data)
    void greet_people(greetfunc func, void *data)

def greet(f):
    greet_people(callback, <void *>f)

cdef void callback(char *name, void *f):
    (<object>f)(name.decode("utf-8"))
