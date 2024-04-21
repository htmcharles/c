#include <stdio.h>

#define PI 3.14
#define DIAMETER 12756.1

int main(){
	
	float rad_earth,circumference_earth,surf_area_earth,volume_earth;
	
	rad_earth = DIAMETER/2;
	circumference_earth=2* PI * rad_earth ;
	surf_area_earth= 4* PI * rad_earth * rad_earth ;
	volume_earth= (4.0/3.0)* PI * rad_earth * rad_earth * rad_earth ;
	
	printf("THE RADIUS OF THE EARTH IS %f km\n",rad_earth);
	printf("THE CIRCUMFERANCE OF THE EARTH IS %fkm\n",circumference_earth);
	printf("THE SURFACE AREA OF THE EARTH IS %f km\n",surf_area_earth);
	printf("THE VOLUME OF THE EARTH IS %f km\n",volume_earth);
	
	return 0;
	
	}
