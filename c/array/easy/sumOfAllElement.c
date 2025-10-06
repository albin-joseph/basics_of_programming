//Calculate the sum of all elements in an array.

#include<stdio.h>

int main() {
    int sizeOfArray, sum=0;
    printf("Sum of all elements in an array\n");
    printf("Enter size of the array:\n");
    scanf("%d", &sizeOfArray);
    if(sizeOfArray<1){
        printf("Invalid array size. Please eneter a number 1 or above.\n");
        return 0;
    }
    printf("Enter elements:");
    int arryaX[sizeOfArray];
    for(int i=0; i<sizeOfArray; i++){
        scanf("%d", &arryaX[i]);
    }

    for(int i=0; i<sizeOfArray; i++) {
        sum += arryaX[i];
    }

    printf("Sum of all elements in the array is %d\n", sum);

}