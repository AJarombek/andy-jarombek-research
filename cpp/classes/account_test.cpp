// Unit tests of the Account class using Google Test
// Author: Andrew Jarombek
// Date: 5/5/2023

#include <gtest/gtest.h>
#include "account.h"

class AccountTest : public ::testing::Test {
protected:
    Account account {0, 5};
    void SetUp() override {}
    void TearDown() override {}
};

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST_F(AccountTest, InitialBalanceIsZero) {
    EXPECT_EQ(0.0, account.getBalance());
}

TEST_F(AccountTest, DepositIncreasesBalance) {
    account.deposit(100.0);
    EXPECT_EQ(100.0, account.getBalance());
}

TEST_F(AccountTest, WithdrawDecreasesBalance) {
    account.deposit(100.0);
    account.withdraw(50.0);
    EXPECT_EQ(50.0, account.getBalance());
}

TEST_F(AccountTest, TransferUpdatesBothAccounts) {
    Account otherAccount {};
    account.deposit(100.0);
    account.transfer(otherAccount, 50.0);
    EXPECT_EQ(50.0, account.getBalance());
    EXPECT_EQ(50.0, otherAccount.getBalance());
}

TEST_F(AccountTest, AccrueInterestIncreasesBalance) {
    account.deposit(100.0);
    account.accrueInterest();
    EXPECT_GT(account.getBalance(), 100.0);
    EXPECT_EQ(account.getBalance(), 105.0);
    EXPECT_EQ(account.getInterestRate(), 5);
}
