#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
	double num, sum;
	double i;
	
	printf("enter your number");
	scanf(" %lf", &num);
	
	while(0<num) {
		num--;
		sum+=num;
	}
	
	printf("%lf", sum);
	return 0;

}
