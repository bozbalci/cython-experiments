#include <Python.h>
#include <stdio.h>
#include "kwargs.h"

int main(int argc, char *argv[])
{
    Py_Initialize();
    PyInit_kwargs();

    PyObject *keyword_args = Py_BuildValue("{s:s,s:i}",
        "name", "Berk",
        "age", 19
    );

    call_handler(keyword_args);

    Py_Finalize();
    return 0;
}
