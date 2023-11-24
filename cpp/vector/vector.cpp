// Using vectors in C++
// Author: Andrew Jarombek
// Date: 6/11/2023

#include <vector>

template<typename T>
class Vec : public std::vector<T> {
public:
    // Use the constructors from std::vector
    using std::vector<T>::vector;

    T& operator[](int i) {
        return std::vector<T>::at(i);
    }

    const T& operator[](int i) const {
        return std::vector<T>::at(i);
    }
};