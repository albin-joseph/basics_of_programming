//Input and Output in C
// This program demonstrates basic input and output operations in C.
// It prompts the user to enter an integer and then displays that integer.
// Language standard: C17
// The C17 language standard version is used for this code.
// To compile and run this program, you can use a C compiler like GCC:
// gcc/clang 005Program.c -o 005Program
// ./005Program 

#include <stdio.h> 
int main() {
   int num;
   printf("Enter an integer: ");
   scanf("%d", &num); // Taking input from user
   printf("You entered: %d\n", num); // Displaying output
   return 0;
}