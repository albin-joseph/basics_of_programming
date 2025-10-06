//Calculate the average of array elements.
#include<stdio.h>

int main() {
    int sizeOfArray;
    double sum;
    printf("Average of elements\n");
    printf("Enter size of the array:\n");
    scanf("%d", &sizeOfArray);
    if(sizeOfArray<1){
        printf("Invalid array size. Please eneter a number 1 or above.\n");
        return 0;
    }
    printf("Enter elements:");
    double arryaX[sizeOfArray];
    for(int i=0; i<sizeOfArray; i++){
        scanf("%lf", &arryaX[i]);
    }

    for(int i=0; i<sizeOfArray; i++) {
        sum += arryaX[i];
    }

    printf("Average of array is %0.2lf\n", sum/sizeOfArray);

}