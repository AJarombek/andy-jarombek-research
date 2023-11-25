// Unit tests of the calculator.h and calculator.cpp files using Google Test
// Author: Andrew Jarombek
// Date: 6/17/2023

#include "calculator.h"
#include "pointer.h"
#include <gtest/gtest.h>
#include <memory>

TEST(CalculatorTest, UniquePtrUsage) {
    std::unique_ptr<Calculator> calculator = std::make_unique<Calculator>();

    // Test addition
    EXPECT_EQ(calculator->add(2, 3), 5);

    // Test subtraction
    EXPECT_EQ(calculator->subtract(5, 3), 2);

    // Test multiplication
    EXPECT_EQ(calculator->multiply(4, 3), 12);

    // Test division
    EXPECT_EQ(calculator->divide(10, 2), 5);
}

TEST(CalculatorTest, SharedPtrUsage) {
    std::shared_ptr<Calculator> calculator1 = std::make_shared<Calculator>();
    std::shared_ptr<Calculator> calculator2 = calculator1;

    // Test addition
    EXPECT_EQ(calculator1->add(2, 3), 5);
    EXPECT_EQ(calculator2->add(5, 7), 12);

    // Test subtraction
    EXPECT_EQ(calculator1->subtract(10, 3), 7);
    EXPECT_EQ(calculator2->subtract(8, 5), 3);

    // Test multiplication
    EXPECT_EQ(calculator1->multiply(4, 3), 12);
    EXPECT_EQ(calculator2->multiply(6, 2), 12);

    // Test division
    EXPECT_EQ(calculator1->divide(10, 2), 5);
    EXPECT_EQ(calculator2->divide(20, 5), 4);
}

class PointerTest: public ::testing::Test {
protected:
    int value;
    int* pointer;

    void SetUp() override {
        value = 5;
        pointer = &value;
    }
};

TEST_F(PointerTest, PointerValue) {
    incrementValue(pointer);
    EXPECT_EQ(*pointer, 6);
}

TEST_F(PointerTest, PointerReference) {
    incrementReference(value);
    EXPECT_EQ(value, 6);
}

TEST_F(PointerTest, PointerNullptr) {
    int* nullPointer = nullptr;

    EXPECT_THROW(incrementValue(nullPointer), std::invalid_argument);
    EXPECT_THROW(swapValues(pointer, nullPointer), std::invalid_argument);
}

TEST_F(PointerTest, SwapValuesTest) {
    int otherValue = 10;

    swapValues(pointer, &otherValue);

    EXPECT_EQ(value, 10);
    EXPECT_EQ(otherValue, 5);
}

TEST_F(PointerTest, SquareValueTest) {
    squareValue(&pointer);
    EXPECT_EQ(value, 25);
}

// Run all the tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
