#include <stdio.h>

// Function to access array element given its address and index
int accessArrayElement(int *ptr, int index) {
    return *(ptr + index); // Dereference the pointer after adding the index offset
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int index = 2; // Index of the element we want to access
    int *ptr = &arr[0]; // Pointer to the first element of the array

    // Accessing the value at index 2 using the function
    int value = accessArrayElement(ptr, index);
    printf("Value at index %d: %d\n", index, value);

    return 0;
}
