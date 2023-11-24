// Implementing a Python Module in C++
// Author: Andrew Jarombek
// Date: 11/12/2023

#include <Python.h>

int add(int a, int b) {
    return a + b;
}

static PyObject* add_wrapper(PyObject* self, PyObject* args) {
    int a, b;

    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return nullptr;
    }

    int result = add(a, b);
    return PyLong_FromLong(result);
}

static PyMethodDef methods[] = {
        {"add", add_wrapper, METH_VARARGS, "Add two integers."},
        {nullptr, nullptr, 0, nullptr}
};

static struct PyModuleDef module = {
        PyModuleDef_HEAD_INIT,
        "andy_python_module",
        "Add two integers.",
        -1,
        methods
};

PyMODINIT_FUNC PyInit_andy_python_module(void) {
    return PyModule_Create(&module);
}
