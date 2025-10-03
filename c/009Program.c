// Pointers in c programming
#include <stdio.h>
// Pointer is a variable that stores the address of another variable
// & is address of operator
// * is dereference operator
// %p is format specifier for pointer
// NULL is a special pointer value that indicates that the pointer does not point to any valid memory
// Wild pointer is a pointer that is not initialized to any valid memory address
// Dangling pointer is a pointer that points to a memory location that has been freed or deallocated
// Void pointer is a pointer that can point to any data type
// Pointer arithmetic is the process of manipulating the value of a pointer to point to different memory locations
// Pointer to pointer is a pointer that points to another pointer
// Function pointer is a pointer that points to a function
// Array of pointers is an array that contains pointers as its elements
// Pointer to an array is a pointer that points to an array
// Dynamic memory allocation is the process of allocating memory at runtime using functions like malloc(), calloc(), realloc() and free()
// Example of pointer in c programming  language

int main() {
    int a = 10;
    int *p; // pointer declaration
    p = &a; // pointer initialization
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of p: %p\n", p);
    printf("Value pointed to by p: %d\n", *p);
    return 0;
}
// Output:
// Value of a: 10
// Address of a: 0x7ffee3b8c9ac // (address will vary)
// Value of p: 0x7ffee3b8c9ac // (address will vary)
// Value pointed to by p: 10        

