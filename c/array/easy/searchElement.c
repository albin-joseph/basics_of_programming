//Search for a given element in the array

#include<stdio.h>

int main() {
    int n;
    int searchKey;
    printf("Find the smallest number in a 1D array\n");
    printf("Enter array size:");
    scanf("%d", &n);
    int array[n];
    printf("Please enter array elements:\n");

    for(int i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter serach key:");
    scanf("%d", &searchKey);

    for(int i=0; i<n; i++){
        if(array[i] == searchKey) {
            printf("Found the key %d at %d\n", searchKey, i+1);
            return 0;
        }
    }

    printf("Not found the key element");
      
}