#include <stdio.h>

int main(){
	int arr [10][10];
	int r,c;
	int h;
	printf("input your number :");
	scanf("%d",&h);
	printf("\n");
	for(r=0;r<h;r++){
		for(c=0;c<h;c++){
		   if (r>=c){
		   	 if (c==0||c==r){
		   	 	 arr [r][c]=1;
				} 
			 else{
			 	arr [r][c]=arr [r-1][c-1]+ arr [r-1][c];
			    }
			 printf("%d",arr[r][c]);
		   }
		}
		printf("\n");
	}
		
}
