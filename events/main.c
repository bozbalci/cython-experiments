// The goal of this program to create a Python interface to a C
// program, where users can attach Python event handlers on C
// events.

#include <Python.h>
#include <stdio.h>
#include "trigger.h"

int main(int argc, char *argv[])
{
    Py_Initialize();

    // Add the current working directory to Python path to
    // import modules.
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append(\".\")");
    
    PyInit_trigger();

    // Tests
    trigger("on_start", "foo");
    printf("This output is from the C program.\n");
    trigger("on_exit", "bar");

    Py_Finalize();
    return 0;
}
