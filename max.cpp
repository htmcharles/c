
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdbool.h>
#include <math.h>

int main(){
  

  int i,num;
  printf("Enter number of numbers : ");
  scanf("%d", &num);
  int min;
  
  int myNumber[num];
    for ( i = 1; i <=num;){
    printf("Enter  number %d :",i);
    scanf(" %d", &myNumber[i]);
    int min=myNumber[1];
    i++;
	
  }if(myNumber[i]<min){
    	min=myNumber[i];
	} 
  printf("Minimum number is %d",min);
  
  return 0;
  
}


