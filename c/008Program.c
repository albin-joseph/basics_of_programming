// Functions in C Program.c
//Functions to perform various mathematical operations
// We can reuse these functions in other C programs by including this file
// This file can be compiled and linked with other C files
//  We can also create a static or dynamic library from this file
// This file uses C17 standard
// Author: Albin Joseph
// Date: 2024-06-10
// Version: 1.0
// License: MIT License
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}   

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two integers
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return (float)a / b;
}   

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial of negative number\n");
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}   

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}
// Function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to calculate the power of a number
double power(double base, int exp) {
    return pow(base, exp);
}
// Function to calculate the square root of a number
double square_root(double n) {
    if (n < 0) {
        printf("Error: Square root of negative number\n");
        return -1;
    }
    return sqrt(n);
}
// Function to calculate the absolute value of an integer
int absolute(int n) {
    return (n < 0) ? -n : n;
}   
// Function to calculate the sine of an angle in radians
double sine(double angle) {
    return sin(angle);      

}

int main() {
    // Example usage of the functions
    int a = 10, b = 5;
    printf("Add: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtract: %d - %d = %d\n", a, b, subtract(a, b));
    printf("Multiply: %d * %d = %d\n", a, b, multiply(a, b));
    printf("Divide: %d / %d = %.2f\n", a, b, divide(a, b));
    printf("Factorial: %d! = %llu\n", a, factorial(a));
    printf("Is %d prime? %s\n", a, is_prime(a) ? "Yes" : "No");
    printf("Max: max(%d, %d) = %d\n", a, b, max(a, b));
    printf("Min: min(%d, %d) = %d\n", a, b, min(a, b));
    printf("Power: %.2f^%d = %.2f\n", 2.0, 3, power(2.0, 3));
    printf("Square Root: sqrt(%d) = %.2f\n", a, square_root(a));
    printf("Absolute: |%d| = %d\n", -a, absolute(-a));
    printf("Sine: sin(%.2f) = %.2f\n", M_PI/2, sine(M_PI/2));

    return 0;
}
