#include <stdio.h>
#include <Python.h>

int main() {
    puts("Init 1");
    Py_Initialize();
    PyRun_SimpleString("import unittest");
    Py_Finalize();

    puts("Init 2");
    Py_Initialize();
    PyRun_SimpleString("import unittest");  /* segfault here */
    Py_Finalize();

    return 0;
}

