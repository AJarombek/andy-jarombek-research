// Declaration of the Stock class
// Author: Andrew Jarombek
// Date: 5/10/2023

#ifndef ACCOUNTTESTS_STOCK_H
#define ACCOUNTTESTS_STOCK_H

#include <ctime>
#include "asset.h"

class Stock : public Asset {
private:
    std::string symbol;
    double dividendYield;
    std::tm nextDividendDate;
public:
    Stock(const std::string &name, double price, double dividendYield, std::tm nextDividendDate);
    ~Stock() override = default;

    [[nodiscard]] double calculateValue() const override;
    [[nodiscard]] std::tm getNextDividendDate() const;
};

#endif //ACCOUNTTESTS_STOCK_H
