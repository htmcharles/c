#include <stdio.h>

void findCommonElements(int *arr1, int size1, int *arr2, int size2) {
    printf("Common elements: ");
    int found = 0; // Flag to track if any common elements were found
    
    int i,j;

    for ( i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (*(arr1 + i) == *(arr2 + j)) {
                printf("%d ", *(arr1 + i));
                found = 1; // Set flag to indicate at least one common element found
                break; // Break out of inner loop once a common element is found
            }
        }
    }

    if (!found) {
        printf("No common elements found");
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}
