//variable and constant in C Programming Language
// This program demonstrates the use of variables and constants in C.
// It shows how to declare, initialize, and use variables of different data types.
// It also illustrates the use of constants using the #define directive and the const keyword.
// The program includes examples of integer, floating-point, character, and boolean types.
// The C17 language standard version is used for this code.
// To compile and run this program, you can use a C compiler like GCC:
// gcc/clang 003Program.c -o 003Program
// ./003Program 

#include <stdio.h>
#include <stdbool.h>    

int main() {
    // Variable declarations and initializations
    int age = 25;
    float height = 5.9f;
    char grade = 'A';
    bool isStudent = true;

    // Constant declarations
    #define PI 3.14159
    const int MAX_SCORE = 100;

    // Print variable values
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    printf("Is Student: %s\n", isStudent ? "true" : "false");

    // Print constant values
    printf("Value of PI: %.5f\n", PI);
    printf("Max Score: %d\n", MAX_SCORE);

    return 0;
}