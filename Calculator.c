
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>



int main() {
  char op;
  int repeat =1;
  while(repeat){
  	printf("Enter operator(+,-,/,* or q to quit):");
    scanf(" %c", &op);
   
   if (op =='q'){
   	repeat=0;
   	continue;
   }
  

   double num1,num2;
   
   printf("Enter first number:");
   scanf("%lf", &num1);
   
   printf("Enter second number:");
   scanf("%lf", &num2);
		
	switch (op){
		case'+':
	    printf("sum of %.2lf and %.2lf is %.2f\n", num1,num2, num1+num2);
	    break;
	    case'-':
	    printf("difference of %lf and %lf is %lf \n ", num1,num2,num1-num2);
	    break;
	    case'*':
	    printf("product of %.2lf and %.2lf is %.2f\n",num1,num2, num1*num2);
	    break;
	    case'/':
	    printf("quotient of %.2lf and %.2lf is %.2f\n",num1,num2,num1/num2);
	    break;
	    default:
	    printf("ERROR 401 ASK CHARLES\n");
	    break;
	   
	}
}   printf("DONE BY HATUMA \n");
}
