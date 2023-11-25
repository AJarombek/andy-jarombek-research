# Make the C++ project to run the Classes program.
# Author: Andrew Jarombek
# Date: 5/5/2023

cmake_minimum_required(VERSION 3.12)
project(classes)

set(CMAKE_CXX_STANDARD 17)

add_library(classes STATIC account.cpp account.h asset.cpp asset.h stock.cpp stock.h bond.cpp bond.h)

enable_testing()

# Locate and include Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test executable
add_executable(AccountTests account_test.cpp asset_test.cpp bond_test.cpp stock_test.cpp)

# Link the test executable with Google Test and your implementation
target_link_libraries(AccountTests ${GTEST_LIBRARIES} pthread classes)

