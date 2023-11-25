// Unit tests of the predicates.cpp file using Google Test
// Author: Andrew Jarombek
// Date: 6/11/2023

#include <gtest/gtest.h>
#include <algorithm>
#include <vector>
#include <list>
#include "predicates.cpp"

// Test case for iterating over a vector and finding the first element greater than 26
TEST(FindTest, VectorFindGreaterThan26) {
    std::vector<int> vec;
    vec.push_back(15);
    vec.push_back(30);
    vec.push_back(10);
    vec.push_back(40);
    vec.push_back(20);

    // Find the first element in the vector greater than 26 using the GreaterThan functor
    auto it = std::find_if(vec.begin(), vec.end(), GreaterThan(26));

    // Verify that the found element is the expected value
    ASSERT_NE(it, vec.end());
    EXPECT_EQ(*it, 30);
}

// Test case for iterating over a list and finding the first element greater than 26
TEST(FindTest, ListFindGreaterThan26) {
    std::list<int> lst;
    lst.push_back(15);
    lst.push_back(30);
    lst.push_back(10);
    lst.push_back(40);
    lst.push_back(20);

    // Find the first element in the list greater than 26 using the GreaterThan functor
    auto it = std::find_if(lst.begin(), lst.end(), GreaterThan(26));

    // Verify that the found element is the expected value
    ASSERT_NE(it, lst.end());
    EXPECT_EQ(*it, 30);
}

// Test case for iterating over a vector and filtering values greater than 26
TEST(FilterTest, VectorFilterGreaterThan26) {
    std::vector<int> vec;
    vec.push_back(15);
    vec.push_back(30);
    vec.push_back(10);
    vec.push_back(40);
    vec.push_back(20);

    // Filter the vector using the GreaterThan functor
    std::vector<int> filteredVec;
    std::copy_if(vec.begin(), vec.end(), std::back_inserter(filteredVec), GreaterThan(26));

    // Verify the filtered vector contains the expected values
    std::vector<int> expectedVec;
    expectedVec.push_back(30);
    expectedVec.push_back(40);

    EXPECT_EQ(filteredVec, expectedVec);
}

// Test case for iterating over a list and filtering values greater than 26
TEST(FilterTest, ListFilterGreaterThan26) {
    std::list<int> lst;
    lst.push_back(15);
    lst.push_back(30);
    lst.push_back(10);
    lst.push_back(40);
    lst.push_back(20);

    // Filter the list using the GreaterThan functor
    std::list<int> filteredList;
    std::copy_if(lst.begin(), lst.end(), std::back_inserter(filteredList), GreaterThan(26));

    // Verify the filtered list contains the expected values
    std::list<int> expectedList;
    expectedList.push_back(30);
    expectedList.push_back(40);

    EXPECT_EQ(filteredList, expectedList);
}

// Run all the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
