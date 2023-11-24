# Make the C project to run the Inline Functions program.
# Author: Andrew Jarombek
# Date: 4/29/2023

cmake_minimum_required(VERSION 3.16)

project(max_test C)

# Set C standard to C17
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Find the Check library
link_directories(/usr/local/Cellar/check/0.15.2/lib)
# link_directories("$ENV{CHECK_LIB_DIR}")

find_package(PkgConfig REQUIRED)
pkg_check_modules(CHECK REQUIRED check)

# Add a target for the inline_functions library
add_library(inline_functions STATIC inline_functions.c)

set_target_properties(inline_functions PROPERTIES LINKER_LANGUAGE C)

# Add the max_test executable
add_executable(max_test test_inline_functions.c)

# Link the max_test executable to the Check and inline_functions libraries
target_link_libraries(max_test ${CHECK_LIBRARIES} inline_functions)

# Add the include directories for Check and the inline_functions library
target_include_directories(max_test PUBLIC ${CHECK_INCLUDE_DIRS} .)

# enable testing with CTest
enable_testing()

# add test to CTest
add_test(NAME max_test COMMAND max_test)
