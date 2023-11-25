// Unit tests of the Stock class using Google Test
// Author: Andrew Jarombek
// Date: 6/11/2023

#include <gtest/gtest.h>
#include "stock.h"

// Test fixture for Stock class
class StockTest : public ::testing::Test {};

// Test case for calculateValue() method
TEST_F(StockTest, CalculateValue) {
    Stock stock("Stock 1", 1000.0, 3.5, std::tm{});

    EXPECT_EQ(stock.calculateValue(), 1000.0);
}

// Test case for getNextDividendDate() method
TEST_F(StockTest, GetNextDividendDate) {
    std::tm nextDividendDate{2023, 1, 1, 0, 0, 0, 0, 0, 0};
    Stock stock("Stock 1", 1000.0, 3.5, nextDividendDate);

    EXPECT_EQ(stock.getNextDividendDate().tm_year, nextDividendDate.tm_year);
    EXPECT_EQ(stock.getNextDividendDate().tm_mon, nextDividendDate.tm_mon);
    EXPECT_EQ(stock.getNextDividendDate().tm_mday, nextDividendDate.tm_mday);
}
