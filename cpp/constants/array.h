// Declaration of the Array struct
// Author: Andrew Jarombek
// Date: 7/2/2023

#ifndef POINTERSTESTS_ARRAY_H
#define POINTERSTESTS_ARRAY_H

#include <cstdio>

template<typename T, size_t N>
struct Array {
    T elem[N];

    T* begin() noexcept { return elem; }
    const T* begin() const noexcept { return elem; }

    T* end() noexcept { return elem + N; }
    const T* end() const noexcept { return elem + N; }

    constexpr size_t size() noexcept { return N; };

    T& operator[](size_t n) { return elem[n]; }
    const T& operator[](size_t n) const { return  elem[n]; }
};

#endif //POINTERSTESTS_ARRAY_H
