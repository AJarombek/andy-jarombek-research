// Unit tests of the array.h and array.cpp files using Google Test
// Author: Andrew Jarombek
// Date: 7/2/2023

#include "array.h"
#include <gtest/gtest.h>

// Test fixture for Array<int>
class ArrayIntTest: public ::testing::Test {
protected:
    static constexpr size_t N = 5;  // Adjust the size accordingly
    Array<int, N> arr;
};

// Test case to verify the begin() function for Array<int>
TEST_F(ArrayIntTest, BeginReturnsPointerToFirstElement) {
    int val1 = 42;
    arr[0] = val1;

    EXPECT_EQ(arr.begin(), &arr[0]);
}

// Test case to verify the end() function for Array<int>
TEST_F(ArrayIntTest, EndReturnsPointerToEnd) {
    int val1 = 42;
    arr[4] = val1;

    EXPECT_EQ(arr.end(), &arr[5]);
}

// Test case to verify the size() function for Array<int>
TEST_F(ArrayIntTest, SizeReturnsCorrectSize) {
    EXPECT_EQ(arr.size(), 5);
}

// Test fixture for Array<double>
class ArrayDoubleTest : public ::testing::Test {
protected:
    static constexpr size_t N = 7;  // Adjust the size accordingly
    Array<double, N> arr;
};

// Test case to verify the begin() function for Array<double>
TEST_F(ArrayDoubleTest, BeginReturnsPointerToFirstElement) {
    double val1 = 3.14;
    arr[0] = val1;

    EXPECT_EQ(arr.begin(), &arr[0]);
}

// Test case to verify the end() function for Array<double>
TEST_F(ArrayDoubleTest, EndReturnsPointerToEnd) {
    double val1 = 3.14;
    arr[6] = val1;

    EXPECT_EQ(arr.end(), &arr[7]);
}

// Test case to verify the size() function for Array<double>
TEST_F(ArrayDoubleTest, SizeReturnsCorrectSize) {
    EXPECT_EQ(arr.size(), 7);
}

// Run all the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
