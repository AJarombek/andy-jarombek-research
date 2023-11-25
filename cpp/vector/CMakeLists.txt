# Make the C++ project to run the Vector program.
# Author: Andrew Jarombek
# Date: 6/11/2023

cmake_minimum_required(VERSION 3.12)
project(vector)

set(CMAKE_CXX_STANDARD 17)

add_library(vector STATIC vector.cpp)

enable_testing()

# Locate and include Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(VectorTests vector_test.cpp)

# Link the test executable with Google Test and your implementation
target_link_libraries(VectorTests ${GTEST_LIBRARIES} pthread vector)

