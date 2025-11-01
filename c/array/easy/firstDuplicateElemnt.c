//Find the first duplicate element in an array.
#include <stdio.h>
int firstDuplicate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int index = abs(arr[i]) - 1; // Use the value as an index
        if (arr[index] < 0) {
            return abs(arr[i]); // Duplicate found
        }
        arr[index] = -arr[index]; // Mark as visited
    }
    return -1; // No duplicate found
}
int main() {
    int arr[] = {2, 1, 3, 5, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = firstDuplicate(arr, size);
    if (result != -1) {
        printf("First duplicate element is: %d\n", result);
    } else {
        printf("No duplicate element found.\n");
    }
    return 0;
}