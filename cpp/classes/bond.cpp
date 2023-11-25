// Implementation of the Bond class
// Author: Andrew Jarombek
// Date: 5/13/2023

#include "bond.h"

double Bond::calculateValue() const {
    return this->price;
}

Bond::Bond(const std::string &name, double price, const std::string &issuer, double couponRate): Asset(name, price) {
    this->issuer = issuer;
    this->couponRate = couponRate;
}

double Bond::getCouponRate() const {
    return this->couponRate;
}
