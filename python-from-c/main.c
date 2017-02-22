// This program aims to run pure Python functions named
// `increment`, `get` and `say` defined in counter.py

#include <Python.h>
#include <stdio.h>
#include "glue.h"

int main(int argc, char *argv[]) {
    Py_Initialize();

    // The following two lines add the current working directory
    // to the environment variable `PYTHONPATH`. This allows us
    // to import Python modules in this directory.
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append(\".\")");

    PyInit_glue();

    // Tests
    for (int i = 0; i < 10; i++)
    {
        increment();
    }

    int x = get();
    printf("Incremented %d times\n", x);

    printf("The binary representation of the number 42 is\n");
    say(3);

    Py_Finalize();
    return 0;
}
