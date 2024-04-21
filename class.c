#include <stdio.h>

int main(){
	int age[]={12,11,12,10,17};
	
	int sum = 0;
	int i;
	for(i=0;i<5;i++){
		sum+=age[i];
	}
		printf("the sum is %d",sum);
		return 0;
}
