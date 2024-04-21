#include <stdio.h>
#include <string.h>

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    char *string1 = "Hello";
    char *string2 = "World";

    printf("Before swapping: string1 = %s, string2 = %s\n", string1, string2);

    swapStrings(&string1, &string2);

    printf("After swapping: string1 = %s, string2 = %s\n", string1, string2);

    return 0;
}
