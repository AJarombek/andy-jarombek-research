// Unit tests of the Bond class using Google Test
// Author: Andrew Jarombek
// Date: 6/11/2023

#include <gtest/gtest.h>
#include "bond.h"

// Test fixture for Bond class
class BondTest : public ::testing::Test {};

// Test case for calculateValue() method
TEST_F(BondTest, CalculateValue) {
    Bond bond("Bond 1", 1000.0, "Issuer 1", 5.0);
    EXPECT_EQ(bond.calculateValue(), 1000.0);
}

TEST_F(BondTest, GetName) {
    Bond bond("Bond 1", 1000.0, "Issuer 1", 5.0);
    EXPECT_EQ(bond.getName(), "Bond 1");
}

// Test case for getCouponRate() method
TEST_F(BondTest, GetCouponRate) {
    Bond bond("Bond 1", 1000.0, "Issuer 1", 5.0);
    EXPECT_EQ(bond.getCouponRate(), 5.0);
}
