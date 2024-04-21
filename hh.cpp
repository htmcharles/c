#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int from,to,temperature;
	printf("Enter the temperature :\n");
	scanf("%d",&temperature);
	int difference= temperature-32;
	printf("Enter 1 to convert from celcius \n");
	printf("Enter 2 to convert from fahrneit \n");
	printf("Enter 3 to convert from kelvin \n ");
    printf("Enter 4 to convert from raumur :");
	scanf("%d",&from);
	printf("-------------------\n");
	
	if (from==1){
	printf("enter 1 to convert to fahrneit \n");
	printf("enter 2 to convert to kelvin \n");
	printf("enter 3 to convert to raumur:");
	scanf("%d", &to);
	}	
	else if (from=2){
	printf("enter 1 to convert to celcius \n");
	printf("enter 2 to convert to kelvin \n");
	printf("enter 3 to convert to raumur:");
	scanf("%d", &to);
	
	}
	else if (from==3){	
	printf("enter 1 to convert to celcius \n");
	printf("enter 2 to convert to fahneit \n");
	printf("enter 3 to convert to raumur :");
	scanf("%d", &to);
	}
	else if (from==4){
	printf("enter 1 to convert to celcius \n");
    printf("enter 2 to convert to faheneit \n");
	printf("enter 3 to convert to kelvin :");
	scanf("%d", &to);
	}
	if (from==1&&to==1){
		printf("%d celcius  = %.2lf farnheit",temperature,temperature *1.8 + 32);
	}
	else if (from==1&&to==2){
		printf("%d celcius  = %.2lf kelvin",temperature,temperature +273.15);
	}
	else if (from==1&&to==3){
		printf("%d celcius  = %.2lf raumur",temperature,temperature * 0.8);
	}
	else if (from=2&&to==1){
		printf("%d farnheit   = %.2lf celcius",temperature,difference*0.5555);
}
	else if (from=2&&to==2){
		printf("%d farnheit   = %.2lf kelvin",temperature,difference*0.5555+273.15);
	}	else if (from=2&&to==3){
		printf("%d farnheit   = %.2lf celcius",temperature,difference*0.5555*0.8);
	}
	
	else if (from==3&&to==1){
		printf("%d kelvin   = %.2lf celcius",temperature,temperature- 273.15);
	}
	else if (from==3&&to==2){
		printf("%d kelvin  = %.2lf farnheit",temperature,temperature * 1.8 - 459.67);
	}
	else if (from==3&&to==3){
		printf("%d kelvin = %.2lf raumur ",temperature,temperature+273.15 * 0.8);
	}
	else if (from==4&&to==1){
		printf("%d raumur = %.2lf celcius",temperature,temperature*1.25);
	}
	else if(from==4&&to==2){
		printf("%d raumur = %.2lf farnheit",temperature,temperature * 2.25 + 32 );
	}
	else if (from==4&&to==3){
		printf("%d raumur = %.2lf kelvin",temperature,temperature * 1.25 + 273.15);
	}
	
    return 0;
}
