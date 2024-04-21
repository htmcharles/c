#include<stdio.h>


int main(){
	
	int months,days;
	
	printf("Ener days :");
	scanf("%d",&days);
	
	months=days/30;
	days=days%30;
	printf("months=%d,Days=%d",months,days);
	
	return 0;
}
