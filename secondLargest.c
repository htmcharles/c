#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = arr[0];
    int i;
    
    for ( i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    printf("The second largest element in the array is: %d\n", secondLargest);
    return 0;
}
