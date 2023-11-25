// Inline functions using GCC
// Author: Andrew Jarombek
// Date: 4/29/2023

// The __attribute__((always_inline)) attribute instructs the compiler to always
// inline the function, which means that the function call is replaced with the
// function body at the call site during compilation, potentially improving
// performance by eliminating the overhead of a function call.
static inline __attribute__((always_inline)) int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}
