# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(andy_python_module)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)

# Find Python
find_package(Python COMPONENTS Interpreter Development REQUIRED)

# Include directories for Python headers
include_directories(${Python_INCLUDE_DIRS})

# Create the shared library for the Python module
add_library(andy_python_module MODULE add.cpp)

# Link the Python library
target_link_libraries(andy_python_module ${Python_LIBRARIES})

# Set the output library name and its destination
set_target_properties(andy_python_module PROPERTIES
    OUTPUT_NAME "andy_python_module"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)

# Install the Python module
install(TARGETS andy_python_module DESTINATION ${CMAKE_CURRENT_SOURCE_DIR})
