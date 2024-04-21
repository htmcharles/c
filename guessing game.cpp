#include<stdio.h>
#include<math.h>

int main(){
	int myNum;
	int index=1,tries=0,triallimit=3;
	int trueNum=30;
	for(tries;tries<triallimit;tries++){
	printf("enter a number\n");
	scanf("%d",&myNum);
		if(myNum==trueNum){
		index=0;
		}
	if(index==1){
		printf("you failed\n");
		printf("you wrote wrong number\n");
	}
	else{
		printf("you won\n");
		printf("you wrote true number\n");
	}
	
	}
	
	
	return 0;
}
