#include <stdio.h>


int main(void){

	int minutes = 0;
	
	printf("Enter number of minutes: ");
	scanf("%d", &minutes);

	printf("\n");

	printf("HOURS\t\tMINUTES\n");
	printf("%4d\t\t%4d\n", (minutes / 60), (minutes % 60));

	return 0;
}
