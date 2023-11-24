from setuptools import setup, Extension

andy_python_module = Extension('andy_python_module', sources=['add.cpp'])

setup(
    name='andy_python_module',
    version='1.0',
    description='This is a demo package',
    ext_modules=[andy_python_module],
)
