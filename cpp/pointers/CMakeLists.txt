# Make the C++ project to run the Pointers program.
# Author: Andrew Jarombek
# Date: 6/17/2023

cmake_minimum_required(VERSION 3.12)
project(pointers)

set(CMAKE_CXX_STANDARD 17)

add_library(pointers STATIC calculator.cpp calculator.h pointer.cpp pointer.h)

enable_testing()

# Locate and include Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(PointersTests pointers_test.cpp)

# Link the test executable with Google Test and your implementation
target_link_libraries(PointersTests ${GTEST_LIBRARIES} pthread pointers)
