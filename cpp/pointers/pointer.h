// Declaration of pointer functions
// Author: Andrew Jarombek
// Date: 6/26/2023

#ifndef POINTERSTESTS_POINTER_H
#define POINTERSTESTS_POINTER_H

#include <stdexcept>

void incrementValue(int* value);
void incrementReference(int& value);
void swapValues(int* a, int* b);
void squareValue(int** ptr);

#endif //POINTERSTESTS_POINTER_H
