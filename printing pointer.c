#include <stdio.h>

int main() {
    // String
    char str[] = "Hello, World!";
    char *str_ptr = str;

    // Double
    double d = 3.14159;
    double *d_ptr = &d;

    // Int
    int i = 42;
    int *i_ptr = &i;

    // Printing string
    printf("String: %s\n", str);
    printf("String size: %lu\n", sizeof(str));
    printf("String address: %p\n", (void *)str_ptr);
    printf("String pointer address: %p\n", (void *)&str_ptr);

    // Printing double
    printf("\nDouble: %lf\n", d);
    printf("Double size: %lu\n", sizeof(d));
    printf("Double address: %p\n", (void *)d_ptr);
    printf("Double pointer address: %p\n", (void *)&d_ptr);

    // Printing int
    printf("\nInteger: %d\n", i);
    printf("Integer size: %lu\n", sizeof(i));
    printf("Integer address: %p\n", (void *)i_ptr);
    printf("Integer pointer address: %p\n", (void *)&i_ptr);

    return 0;
}
