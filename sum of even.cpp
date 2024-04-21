#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

int main(){
	int n,i,result=0;
	printf("Enter n :");
	scanf("%d",&n);
	int count=0;
	for(i=0;i<n;){
	if(n%2==0){
	result+=n;
	count++;
	}
	n--;
    }
	printf("sum is %d\n",result);
	printf("average is %d\n",result/count);
	
	
	return 0;
}

