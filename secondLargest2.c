#include <stdio.h>

int findSecondLargest(int *arr, int n) {
    int firstMax = *arr; // Initialize firstMax to the first element of the array
    int secondMax = *arr; // Initialize secondMax to the first element of the array
    
    int i;

    for ( i = 1; i < n; i++) {
        if (*(arr + i) > firstMax) {
            secondMax = firstMax; // Update secondMax to previous firstMax
            firstMax = *(arr + i); // Update firstMax to the new maximum value
        } else if (*(arr + i) > secondMax && *(arr + i) != firstMax) {
            secondMax = *(arr + i); // Update secondMax to the new second largest value
        }
    }

    return secondMax;
}

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);
    printf("The second largest element in the array is: %d\n", secondLargest);

    return 0;
}
