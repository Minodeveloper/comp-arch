#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a', 'q','r','s'};

	printf("numbers: %d %d %d %d\n",
		       	numbers[0], numbers[1], numbers[2], numbers[3]);
	
	printf("name each: %d %d %d %d\n",
			name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name);

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	name[0] = 'B';
	name[1] = 'O';
	name[2] = 'N';
	name[3] = '_';
	
	printf("numbers: %d %d %d %d\n",
		       	numbers[0], numbers[1], numbers[2], numbers[3]);


	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);

	printf("names: %s\n", name);

	char *another = "Mad";

	printf("another: %s\n", another);

	
	printf("name each: %c_ %c_ %c_ _%d_\n",
			another[0], another[1], another[2], another[3]);

	return 0;
}
