// Operators in C Programming Language
// This program demonstrates the use of various operators in C.
// It includes examples of arithmetic, relational, logical, bitwise, assignment, and miscellaneous operators.
//arithmetic operators: +, -, *, /, %
//relational operators: ==, !=, >, <, >=, <=
//logical operators: &&, ||, !
//bitwise operators: &, |, ^, ~, <<, >>
//assignment operators: =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
//miscellaneous operators: sizeof, & (address of), * (dereference)
// The program performs operations using these operators and prints the results to the console.
// The C17 language standard version is used for this code.
// To compile and run this program, you can use a C compiler like GCC:
// gcc/clang 004Program.c -o 004Program
// ./004Program 

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Arithmetic Operators
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %s\n", (a == b) ? "true" : "false");
    printf("a != b: %s\n", (a != b) ? "true" : "false");
    printf("a > b: %s\n", (a > b) ? "true" : "false");
    printf("a < b: %s\n", (a < b) ? "true" : "false");
    printf("a >= b: %s\n", (a >= b) ? "true" : "false");
    printf("a <= b: %s\n", (a <= b) ? "true" : "false");

    // Logical Operators
    bool x = true, y = false;
    printf("\nLogical Operators:\n");
    printf("x && y: %s\n", (x && y) ? "true" : "false");
    printf("x || y: %s\n", (x || y) ? "true" : "false");
    printf("!x: %s\n", (!x) ? "true" : "false");

    // Bitwise Operators
    unsigned int p = 5, q = 3; // 5 = 0101, 3 = 0011 in binary
    printf("\nBitwise Operators:\n");
    printf("p & q = %u\n", p & q);
    printf("p | q = %u\n", p | q);
    printf("p ^ q = %u\n", p ^ q);
    printf("~p = %u\n", ~p);
    printf("p << 1 = %u\n", p << 1);
    printf("p >> 1 = %u\n", p >> 1);

    // Assignment Operators
    int c = 10;
    printf("\nAssignment Operators:\n");
    printf("c = %d\n", c);
    c += 5; printf("c += 5 -> %d\n", c);
    c -= 3; printf("c -= 3 -> %d\n", c);
    c *= 2; printf("c *= 2 -> %d\n", c);
    c /= 4; printf("c /= 4 -> %d\n", c);
    c %= 3; printf("c %%= 3 -> %d\n", c);
    c &= 1; printf("c &= 1 -> %d\n", c);
    c |= 2; printf("c |= 2 -> %d\n", c);
    c ^= 3; printf("c ^= 3 -> %d\n", c);
    c <<= 1; printf("c <<= 1 -> %d\n", c);
    c >>= 1; printf("c >>= 1 -> %d\n", c);
    // Miscellaneous Operators
    printf("\nMiscellaneous Operators:\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Address of a: %p\n", (void*)&a);
    int *ptr = &a;
    printf("Value at address of a: %d\n", *ptr);    
    return 0;
}