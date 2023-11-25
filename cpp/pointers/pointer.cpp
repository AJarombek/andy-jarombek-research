// Implementation of pointer functions
// Author: Andrew Jarombek
// Date: 6/26/2023

#include "pointer.h"

void incrementValue(int* value) {
    if (value == nullptr) {
        throw std::invalid_argument("Null pointer passed to incrementValue");
    }

    (*value)++;
}

void incrementReference(int& value) {
    value++;
}

void swapValues(int* a, int* b) {
    if (a == nullptr || b == nullptr) {
        throw std::invalid_argument("Null pointer passed to swapValues");
    }

    int temp = *a;
    *a = *b;
    *b = temp;
}

void squareValue(int** ptr) {
    if (*ptr == nullptr) {
        throw std::invalid_argument("Null pointer passed to squareValue");
    }

    **ptr *= **ptr;
}
