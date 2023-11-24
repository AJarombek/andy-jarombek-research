# Make the C++ project to run the Memory Arena program.
# Author: Andrew Jarombek
# Date: 9/9/2023

cmake_minimum_required(VERSION 3.12)
project(memory_arena)

set(CMAKE_CXX_STANDARD 17)

add_library(memory_arena STATIC memory_arena.cpp memory_arena.h)

enable_testing()

# Locate and include Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(MemoryArenaTests memory_arena_test.cpp)

# Link the test executable with Google Test and your implementation
target_link_libraries(MemoryArenaTests ${GTEST_LIBRARIES} pthread memory_arena)
