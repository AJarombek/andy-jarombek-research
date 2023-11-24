// Using predicates in C++
// Author: Andrew Jarombek
// Date: 6/11/2023

struct GreaterThan {
    int value;

    explicit GreaterThan(int value) {
        this->value = value;
    }

    bool operator()(int other) const {
        return other > value;
    }
};
