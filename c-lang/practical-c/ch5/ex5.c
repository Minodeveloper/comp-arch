#include <stdio.h>

int main(void){

	printf("Outputs total number of minutes!\n\n");

	int hours = 0;
	int minutes = 0;

	printf("Enter number of hours: ");
	scanf("%d", &hours);
	printf("Enter number of minutes: ");
	scanf("%d", &minutes);

	printf("Total : %d minutes \n", (60 * hours) + minutes);

	return 0;
}
