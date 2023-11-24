# Make the C++ project to run the Constants program.
# Author: Andrew Jarombek
# Date: 7/2/2023

cmake_minimum_required(VERSION 3.12)
project(constants)

set(CMAKE_CXX_STANDARD 17)

add_library(constants STATIC array.cpp array.h)

enable_testing()

# Locate and include Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(ConstantsTests constants_test.cpp)

# Link the test executable with Google Test and your implementation
target_link_libraries(ConstantsTests ${GTEST_LIBRARIES} pthread constants)
