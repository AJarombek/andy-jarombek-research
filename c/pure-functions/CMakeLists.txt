# Make the C project to run the Pure Functions program.
# Author: Andrew Jarombek
# Date: 4/30/2023

cmake_minimum_required(VERSION 3.16)

project(pure_functions_test C)

# Set C standard to C17
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Find the Check library
link_directories(/usr/local/Cellar/check/0.15.2/lib)
# link_directories("$ENV{CHECK_LIB_DIR}")

find_package(PkgConfig REQUIRED)
pkg_check_modules(CHECK REQUIRED check)

# Add a target for the pure_functions library
add_library(pure_functions STATIC pure_functions.c)

set_target_properties(pure_functions PROPERTIES LINKER_LANGUAGE C)

# Add the pure_functions_test executable
add_executable(pure_functions_test test_pure_functions.c)

# Link the pure_functions_test executable to the Check and pure_functions libraries
target_link_libraries(pure_functions_test ${CHECK_LIBRARIES} pure_functions)

# Add the include directories for Check and the pure_functions library
target_include_directories(pure_functions_test PUBLIC ${CHECK_INCLUDE_DIRS} .)

# enable testing with CTest
enable_testing()

# add test to CTest
add_test(NAME pure_functions_test COMMAND pure_functions_test)
