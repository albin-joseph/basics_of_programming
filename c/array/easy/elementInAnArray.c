// Find the element in an array.
#include<stdio.h>
int main() {
   int n, element, found = 0;
   printf("Find an element in a 1D array\n");
   printf("Enter array size: ");
   scanf("%d", &n);
   int array[n];
   printf("Please enter array elements:\n"); 
   for(int i = 0; i < n; i++) {
       scanf("%d", &array[i]);
   }
   printf("Enter the element to search: ");
   scanf("%d", &element);
   for(int i = 0; i < n; i++) {
       if(array[i] == element) {
           found = 1;
           break;   
       }
    }
    if(found) {
         printf("Element %d is found in the array.\n", element);   
    } else {
         printf("Element %d is not found in the array.\n", element);
    }
}