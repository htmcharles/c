#include <stdio.h>

int main() {
    int num = 10;
    int *ptr1;  // Pointer variable
    int **ptr2; // Pointer to a pointer variable

    ptr1 = &num; // Assign the address of num to ptr1
    ptr2 = &ptr1; // Assign the address of ptr1 to ptr2

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr1: %p\n", ptr1);
    printf("Value pointed to by ptr1: %d\n", *ptr1); // Dereference ptr1 to access the value of num
    printf("Value of ptr2: %p\n", ptr2);
    printf("Value pointed to by ptr2: %p\n", *ptr2); // Value pointed to by ptr2 is ptr1
    printf("Value pointed to by ptr1 via ptr2: %d\n", **ptr2); // Dereference ptr2 to access the value of num

    return 0;
}
