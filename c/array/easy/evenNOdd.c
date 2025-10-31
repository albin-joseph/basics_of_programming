//Count how many even and odd numbers are present in the array.
#include<stdio.h>
int main() {
   int n, evenCount = 0, oddCount = 0;
   printf("Count even and odd numbers in a 1D array\n");
   printf("Enter array size: ");
   scanf("%d", &n);
   int array[n];
   printf("Please enter array elements:\n"); 
   for(int i = 0; i < n; i++) {
       scanf("%d", &array[i]);
   }
   for(int i = 0; i < n; i++) {
       if(array[i] % 2 == 0) {
           evenCount++;
       } else {
           oddCount++;
       }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
}   