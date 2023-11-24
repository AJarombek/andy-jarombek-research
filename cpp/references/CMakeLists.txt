# Make the C++ project to run the References program.
# Author: Andrew Jarombek
# Date: 7/4/2023

cmake_minimum_required(VERSION 3.12)
project(references)

set(CMAKE_CXX_STANDARD 17)

add_library(references STATIC references.cpp references.h)

enable_testing()

# Locate and include Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(ReferencesTests references_test.cpp)

# Link the test executable with Google Test and your implementation
target_link_libraries(ReferencesTests ${GTEST_LIBRARIES} pthread references)
