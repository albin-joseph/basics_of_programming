// Loops  in C programming language
#include <stdio.h>
/*
Loops are used to execute a block of code repeatedly until a certain condition is met.
There are three types of loops in C programming language:
1. For loop
    For loop is used to execute a block of code a specific number of times.
    Syntax of For loop:
    for(initialization; condition; increment/decrement)
    {
        //block of code to be executed
    }   
2. While loop
    While loop is used to execute a block of code as long as a specified condition is true.
    Syntax of While loop:
    while(condition)
    {
        //block of code to be executed
    }
3. Do-While loop
    Do-While loop is similar to While loop, but it executes the block of code at least once before checking the condition.
    Syntax of Do-While loop:
    do
    {
        //block of code to be executed
    } while(condition);
*/  

int main() {
    int i;

    // For loop
    printf("For loop:\n");
    for(i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop:\n");
    i = 1;
    while(i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Do-While loop
    printf("Do-While loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 5);
    printf("\n");

    return 0;
}
