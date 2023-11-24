// Data alignment example using structs
// Author: Andrew Jarombek
// Date: 9/18/2022

#include <cassert>
#include <iostream>

using namespace std;

struct Sample1 {
    bool a;
    bool b;
    double c;
};

struct Sample2 {
    bool a;
    double c;
    bool b;
};

int main() {
    auto first = Sample1{true, false, 1.0};
    auto second = Sample2{true, 1.0, false};

    cout << "Size of Sample1: " << sizeof(first) << " bytes\n";
    assert(sizeof(first) == 16);

    cout << "Size of Sample2: " << sizeof(second) << " bytes\n";
    assert(sizeof(second) == 24);
}