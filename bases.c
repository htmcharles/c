#include <stdio.h>
int main() {
    int decimal, base, quotient, remainder, i = 0;
    char hexadecimal[100];
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Enter the base to convert to: ");
    scanf("%d", &base);
    quotient = decimal;
    while (quotient != 0) {
        remainder = quotient % base;
        if (remainder < 10)
            hexadecimal[i++] = remainder + '0';
        else
            hexadecimal[i++] = remainder + 'A' - 10;
        quotient = quotient / base;
    }
    printf("The equivalent value in base %d is: ", base);
    int j;
    for (j = i - 1; j >= 0; j--){
    	printf("%c", hexadecimal[j]);
	}
        
    return 0;
}
