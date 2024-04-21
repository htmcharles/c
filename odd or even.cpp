#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
	
	int num;
	printf("enter your number ");
	scanf("%d",&num);
	 int remainder = num % 2;
	
    if(remainder==0){
		printf (" %d is even",num);
	} 
	else {
	printf ("%d is odd",num);
	}
   	return 0;
		
	
}
