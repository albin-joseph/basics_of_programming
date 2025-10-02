//Input and Output in C
// This program demonstrates basic input and output operations in C.
// It prompts the user to enter an integer and then displays that integer.
// Language standard: C17

#include <stdio.h> 
int main() {
   int num;
   printf("Enter an integer: ");
   scanf("%d", &num); // Taking input from user
   printf("You entered: %d\n", num); // Displaying output
   return 0;
}