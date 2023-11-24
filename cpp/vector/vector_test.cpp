// Unit tests of the vector.cpp file using Google Test
// Author: Andrew Jarombek
// Date: 6/11/2023

#include <gtest/gtest.h>
#include "vector.cpp"

// Test case for std::vector accessing an element beyond the end
TEST(VectorTest, AccessOutOfBounds) {
    std::vector<int> vec;

    // Attempt to access an element beyond the end of the vector
    // This should cause undefined behavior
    EXPECT_NO_THROW(vec[0]);
}

// Test case for Vec accessing an element beyond the end
TEST(VecTest, AccessOutOfBounds) {
    Vec<int> vec;

    // Attempt to access an element beyond the end of the vector
    // This should throw an exception due to the use of `at()` method in the Vec class
    EXPECT_THROW(vec[0], std::out_of_range);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
