#include<stdio.h>

int main(){
    int n;
    printf("Find the smallest number in a 1D array\n");
    printf("Enter array size:");
    scanf("%d", &n);
    int array[n];
    printf("Please enter array elements:\n");

    for(int i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }

    int smallest_number = array[0];

    for(int i=0; i<n; i++){
        if(smallest_number>array[i]){
            smallest_number = array[i];
        }
    }

    printf("Smallest number in the array is %d\n", smallest_number);
}