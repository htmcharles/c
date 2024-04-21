#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <math.h>


int main() {
   double num, result;
   printf("Enter a number: ");
   scanf("%lf", &num);
   result = sqrt(num);
   printf("The square root of %.2lf is %.2lf\n", num, result);
   return 0;
}
