# C project to run the open_file program.
# Author: Andrew Jarombek
# Date: 12/9/2021

cmake_minimum_required(VERSION 3.21)
project(open_file C)

set(CMAKE_C_STANDARD 11)

add_executable(open_file open_file.c)