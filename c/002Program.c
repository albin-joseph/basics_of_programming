//Data TYpes in C Programming Language
// This program demonstrates the use of various data types in C.
// It includes examples of integer, floating-point, character, and boolean types.
// int, short, long, long long, float, double, long double, char, and bool are used in this program.
// int takes 4 bytes, short takes 2 bytes, long takes 4 or 8 bytes (depending on the system), and long long takes 8 bytes.
// float takes 4 bytes, double takes 8 bytes, and long double takes 10, 12, or 16 bytes (depending on the system).
// char takes 1 byte and is used to store single characters.
// bool is included from stdbool.h and can take values true or false.
// The program prints the values of different data types to the console.
// The program also shows how to declare and initialize variables of these types.
// The C17 language standard version is used for this code.
// To compile and run this program, you can use a C compiler like GCC:
// gcc/clang 002Program.c -o 002Program
// ./002Program   

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer types
    int a = 10;
    short b = 20;
    long c = 30000;
    long long d = 4000000000;

    // Floating-point types
    float e = 5.5f;
    double f = 10.99;
    long double g = 20.123456789;

    // Character type
    char h = 'A';

    // Boolean type (using stdbool.h)
    bool isTrue = true;

    // Print the values
    printf("Integer: %d\n", a);
    printf("Short: %d\n", b);
    printf("Long: %ld\n", c);
    printf("Long Long: %lld\n", d);
    printf("Float: %.2f\n", e);
    printf("Double: %.2lf\n", f);
    printf("Long Double: %.9Lf\n", g);
    printf("Character: %c\n", h);
    printf("Boolean: %s\n", isTrue ? "true" : "false");

    return 0;
}