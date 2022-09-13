#include <stdio.h>

int main(void){

	printf("Volume  of SPHERE\n");

	float radius = 25;

	//float pie = 22.0/7.0;
	float pie = 3.14;

	double volume = (4.0/3.0) * pie * radius * radius * radius;

	printf("\n");

	printf("Volume of sphere with radius %.2lf units is %.2lf\n", radius, volume);
	
	return 0;
}
