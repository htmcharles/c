#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b); // Pass the addresses of a and b to the swap function

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
