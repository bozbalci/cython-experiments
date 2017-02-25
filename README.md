# Cython experiments

Experimenting with Cython.

* counter: runs simple Python functions from C
* events: event system implemented in Cython, allows users to define Python event handlers triggered by C
* callback: passes Python functions as parameters to C functions accepting function pointers, using a callback mechanism
* ctypes (**WIP**): implements ctypes-based callbacks to pass Python functions as parameters to C functions
* kwargs: passes keyword arguments to Python functions from C

## TO-DO:

- [x] add callback example
- [ ] add a callback example that uses ctypes-based callbacks, like in Cubature
- [ ] consider sophisticating the events example by adding decorators such as @once
