#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    int i;
    for ( i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    printf("The maximum element in the array is: %d\n", max);
    return 0;
}
