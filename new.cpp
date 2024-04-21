#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int main(){
	int num,count,result=0,i;
	printf("enter your number :");
	scanf("%d",&num);
	for(i=0;i<num;){
		if(num%2==0){
			result+=num;
			count++;
		}
		num--;
	}
	printf("sum of those even numbers is %d\n",result);
	printf("average of these even numbers is %d",result/count);
	return 0;
	
}
