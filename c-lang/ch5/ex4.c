#include <stdio.h>

int main(void){

	double  numberOfMilesPerKilometer = 0.6213712;

	double miles = 23;

	printf("%.2lf miles is %lf km\n", miles, numberOfMilesPerKilometer * miles);

	return 0;
}
