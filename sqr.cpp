#include<stdio.h>

int main(){
	float N=1000000000000000;
	float a=2;
	
	while(a<N){
	printf("%.0f\n",a);
	a*=a;
	}
}
