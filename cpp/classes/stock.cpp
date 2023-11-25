// Implementation of the Stock class
// Author: Andrew Jarombek
// Date: 5/10/2023

#include "stock.h"

Stock::Stock(const std::string &name, double price, double dividendYield, std::tm nextDividendDate): Asset(name, price) {
    this->dividendYield = dividendYield;
    this->nextDividendDate = nextDividendDate;
}

double Stock::calculateValue() const {
    return this->price;
}

std::tm Stock::getNextDividendDate() const {
    return this->nextDividendDate;
}
