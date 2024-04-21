#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


int main(){
	
	char grade; 
	
	printf("ENTER YOUR GRADE:");
	scanf(" %c",&grade);
	
	switch (grade){
		case'A':
	    printf("you did well");
	    break;
	    case'B':
	    printf("you did bad");
	    break;
	    case'C':
	    printf("you did nice");
	    break;
	    case'D':
	    printf("you tried");
	    break;
	    default:
		printf("invalid grade");
	}
}
