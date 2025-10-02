//Conditional statements in C programming language 
//If, If-Else, Nested If, Switch Case
//If statement and If-Else statement is used to perform decision making in C programming language.
//Decision making is required when we want to execute a particular block of code based on some conditions.
//In C programming, we have the following types of decision making statements:
//1. If statement
//  If statement is used to execute a block of code if a specified condition is true.
// Syntax of If statement:
/*
if(condition)
{
    //block of code to be executed if the condition is true
}
*/
//2. If-Else statement
    // If-Else statement is used to execute a block of code if a specified condition is true, otherwise it executes another block of code.
    // Syntax of If-Else statement:
/*
if(condition)
{
    //block of code to be executed if the condition is true
}
else
{
    //block of code to be executed if the condition is false
}
*/
//3. Nested If statement
    // Nested If statement is used to execute a block of code if a specified condition is true, otherwise it checks another condition.
    // Syntax of Nested If statement:
/*
if(condition1)
{
    //block of code to be executed if condition1 is true
    if(condition2)
    {
        //block of code to be executed if condition2 is true
    }
    else
    {
        //block of code to be executed if condition2 is false
    }
}
else
{
    //block of code to be executed if condition1 is false
}
*/

//4. Switch Case statement  
    // Switch Case statement is used to execute one block of code among multiple blocks of code based on the value of a variable.
    // Syntax of Switch Case statement:
/*
switch(expression)
{
    case value1:
        //block of code to be executed if expression is equal to value1
        break;  
    case value2:
        //block of code to be executed if expression is equal to value2
        break;
    ...
    default:
        //block of code to be executed if expression is not equal to any of the values
}
*/

//In this program, we demonstrate the use of If, If-Else, Nested If, and Switch Case statements in C programming language.
//The program takes an integer input from the user and performs various checks using different conditional statements to display appropriate messages based on the input value. 
//Compile and run the program to see how each conditional statement works.  
//This program uses the C17 language standard version.
//To compile the program using GCC with C17 standard, use the following command:
//gcc -std=c17 -o program c/006Program.c
//Then run the program using:
//./program006  

#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // If statement
    if (number > 0) {
        printf("The number is positive.\n");
    }

    // If-Else statement
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Nested If statement
    if (number != 0) {
        if (number > 0) {
            printf("The number is positive and non-zero.\n");
        } else {
            printf("The number is negative and non-zero.\n");
        }
    } else {
        printf("The number is zero.\n");
    }

    // Switch Case statement
    switch (number) {
        case 1:
            printf("The number is one.\n");
            break;
        case 2:
            printf("The number is two.\n");
            break;
        case 3:
            printf("The number is three.\n");
            break;
        default:
            printf("The number is not one, two, or three.\n");
            break;
    }

    return 0;
}

