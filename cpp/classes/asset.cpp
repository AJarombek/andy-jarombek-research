// Implementation of the Asset class
// Author: Andrew Jarombek
// Date: 5/10/2023

#include "asset.h"

Asset::Asset(const std::string &name, double price) {
    this->name = name;
    this->price = price;
}

std::string Asset::getName() const {
    return this->name;
}

double Asset::getPrice() const {
    return this->price;
}
