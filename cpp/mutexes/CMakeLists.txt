# Make the C++ project to run the Mutexes program.
# Author: Andrew Jarombek
# Date: 6/17/2023

cmake_minimum_required(VERSION 3.12)
project(mutexes)

set(CMAKE_CXX_STANDARD 17)

add_library(mutexes STATIC mutexes.cpp)

enable_testing()

# Locate and include Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(MutexesTests mutexes_test.cpp)

# Link the test executable with Google Test and your implementation
target_link_libraries(MutexesTests ${GTEST_LIBRARIES} pthread mutexes)
