// Implementation of the Account class
// Author: Andrew Jarombek
// Date: 5/5/2023

#include "account.h"

Account::Account(double balance, int interestRate) {
    this->balance = balance;
    this->interestRate = interestRate;
}

void Account::deposit(double amount) {
    this->balance += amount;
}

void Account::withdraw(double amount) {
    this->balance -= amount;
}

void Account::transfer(Account& account, double amount) {
    this->withdraw(amount);
    account.deposit(amount);
}

void Account::accrueInterest() {
    this->balance += this->balance * (this->interestRate / 100.0);
}

double Account::getBalance() const {
    return this->balance;
}

int Account::getInterestRate() const {
    return this->interestRate;
}
