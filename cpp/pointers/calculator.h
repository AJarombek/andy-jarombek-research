// Declaration of the Calculator class
// Author: Andrew Jarombek
// Date: 6/17/2023

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <memory>

class Calculator {
public:
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
};

#endif  // CALCULATOR_H
