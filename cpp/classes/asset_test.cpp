// Unit tests of the Asset class using Google Test
// Author: Andrew Jarombek
// Date: 6/4/2023

#include <gtest/gtest.h>
#include "asset.h"

// Test fixture for Asset class
class AssetTest : public ::testing::Test {};

// Test case for calculateValue() method (virtual function)
TEST_F(AssetTest, CalculateValue) {
    // Create a derived class object for testing purposes
    class MockAsset : public Asset {
    public:
        using Asset::Asset;
        double calculateValue() const override {
            // Mock implementation for testing
            return getPrice() * 2;
        }
    };

    MockAsset mockAsset("Stock", 100.0);
    EXPECT_EQ(mockAsset.calculateValue(), 200.0);
}
