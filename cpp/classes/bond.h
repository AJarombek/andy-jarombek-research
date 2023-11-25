// Declaration of the Bond class
// Author: Andrew Jarombek
// Date: 5/13/2023

#ifndef ACCOUNTTESTS_BOND_H
#define ACCOUNTTESTS_BOND_H

#include <string>
#include "asset.h"

class Bond : public Asset {
private:
    std::string issuer;
    double couponRate;
public:
    Bond(const std::string& name, double price, const std::string& issuer, double couponRate);
    ~Bond() override = default;

    [[nodiscard]] double calculateValue() const override;
    [[nodiscard]] double getCouponRate() const;
};

#endif //ACCOUNTTESTS_BOND_H
