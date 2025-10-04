#include <stdio.h>

// Arrays in C Programming Language
// This program demonstrates the use of arrays in C.
// Arrays are collections of elements of the same data type stored in contiguous memory locations.
// They allow us to store and access multiple values using a single variable name and an index.
//
// Key points about Arrays:
// - Declaration: data_type array_name[size];
// - Initialization: int arr[5] = {1, 2, 3, 4, 5};
// - Accessing elements: arr[0], arr[1], ... arr[n-1]
// - Array index starts from 0 and goes up to size-1
// - Supports traversal (using loops), searching, and manipulation of elements
// - Multidimensional arrays can be used for matrices (e.g., int matrix[3][3])
//
// This program will:
// 1. Declare and initialize arrays
// 2. Access and print array elements
// 3. Demonstrate traversal using loops
// 4. Work with both 1D and 2D arrays
//
// The C17 language standard version is used for this code.
// To compile and run this program, you can use a C compiler like GCC:
// gcc/clang 010Program.c -o 010Program
// ./010Program

int main() {
    // 1D Array Example
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("1D Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Modify an element
    numbers[2] = 99;
    printf("\nAfter modifying numbers[2]:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // 2D Array Example (Matrix)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("\n2D Array (Matrix) Elements:\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("matrix[%d][%d] = %d\t", row, col, matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
