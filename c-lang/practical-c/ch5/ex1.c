#include <stdio.h>

int main(void){

	printf("Converts Centegrade to Fahrenheit\n");

	float degreeCentegrade = 98.0;

	float degreeFahrenheit = ((9.0/5.0) * degreeCentegrade) + 32;

	printf("%.2f Centegrade = %.2f Fahrenheit\n", degreeCentegrade, degreeFahrenheit);

	return 0;
}
			
