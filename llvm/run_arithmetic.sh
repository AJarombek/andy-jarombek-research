#!/usr/bin/env bash

# Run the arithmetic.ll LLVM code and print the result
# Author: Andrew Jarombek
# Date: 10/18/2022

lli arithmetic.ll
printf "2 + 3 = %s \n" $?
