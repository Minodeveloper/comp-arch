#include <stdio.h>
#include <math.h>

float distancePoints(float pointX1, float pointY1, float pointX2, float pointY2 ){

	float distance = sqrt( pow((pointY2 - pointY1), 2 ) + pow((pointX2 - pointX1), 2 ));

	return distance;
}

int main(void){

	printf("The distance between points (43,23) and (23,67) is %.3f \n", distancePoints(43.0,23.0,23.0,67.0) );


	return 0;
}



