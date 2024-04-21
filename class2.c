#include<stdio.h>

int main(){
	int age[]={12,11,12,10,17};
	
	int min = age[0];
	int i;
	for(i=1;i<4;i++){
		if(age[i]<min){
			min=age[i];
		}
	}
		printf("the minimum is %d",min);
}
