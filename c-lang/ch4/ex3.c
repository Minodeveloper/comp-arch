/***************************************
 *
 *goal:	AREA AND PERIMETER OF RECT
 *auth: Madhuresh
 *date: 24 August 2022	
 ***************************************/
 

#include <stdio.h>

int main(void){
	int widthRectangle = 3; // unit: inch
	int heightRectangle = 5;// unit: inch
	
	int perimeter = 2*(widthRectangle + heightRectangle);
	int area  = widthRectangle * heightRectangle;

	printf("Rectangle width    \t %d inches\n", widthRectangle);
	printf("Rectangle height   \t %d inches\n", heightRectangle);
	printf("Rectangle area     \t %d square inches\n", area);
	printf("Rectangle perimeter\t %d inches\n", perimeter);

	return 0;
}

