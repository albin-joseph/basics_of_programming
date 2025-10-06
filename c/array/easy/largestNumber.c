//Find the maximum element in an array.
#include<stdio.h>

int main(){
    int numbers[12] = {12, 21, 14, 2, 9, 10, 11, 22, 35, 3, 6, 8};
    int largest_number = numbers[0];
    for (int i=0;i<12; i++){
        if(largest_number < numbers[i]) {
            largest_number = numbers[i];
        }
    }

    printf("Largest number in the array is: %d\n", largest_number);
}