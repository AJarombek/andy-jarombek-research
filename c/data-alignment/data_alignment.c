// Data alignment example using structs
// Author: Andrew Jarombek
// Date: 9/18/2022

#include <stdbool.h>
#include <assert.h>
#include <stdio.h>

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
    struct Sample1 first = {true, false, 1.0};
    struct Sample2 second = {true, 1.0, false};

    printf("Size of Sample1: %lu bytes\n", sizeof(first));
    assert(sizeof(first) == 16);

    printf("Size of Sample2: %lu bytes\n", sizeof(second));
    assert(sizeof(second) == 24);
}
