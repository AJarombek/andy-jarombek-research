// Declaration of functions that use references
// Author: Andrew Jarombek
// Date: 7/4/2023

#ifndef CONSTANTSTESTS_REFERENCES_H
#define CONSTANTSTESTS_REFERENCES_H

#include <vector>

double milesToKilometers(double miles);

template<class T>
void times(std::vector<T>& v, int x) {
    for (int i = 0; i < v.size(); i ++) {
        v[i] *= x;
    }
}

//   Equivalent to:
// template<class T>
// void swap(T& a, T& b) {
//     T tmp {static_cast<T&&>(a)};
//     a = static_cast<T&&>(b);
//     b = static_cast<T&&>(tmp);
// }
template<class T>
void swap(T& a, T& b) {
    T tmp {std::move(a)};
    a = std::move(b);
    b = std::move(tmp);
}

#endif //CONSTANTSTESTS_REFERENCES_H
