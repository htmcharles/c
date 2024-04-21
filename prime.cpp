#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
int main() {
    int n, i, index = 0;
    int result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    result = sqrt(n);	
    if (n == 0 || n == 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    for (i = 2; i <= result; i++) {
        if (n % i == 0) {
        index = 1;
        break;
        }
    }
	if (index == 1) {
        printf("%d is not a prime number.\n", n);
    }
    else {
        printf("%d is a prime number.\n", n);
    }
    return 0;
}
