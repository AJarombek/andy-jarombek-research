# Make the C++ project to run the Data Alignment program.
# Author: Andrew Jarombek
# Date: 9/18/2022

cmake_minimum_required(VERSION 3.9)
project(data_alignment)

set(CMAKE_CXX_STANDARD 17)

add_executable(data_alignment data_alignment.cpp)