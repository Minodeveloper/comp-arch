#include <stdio.h>


int main(int argc, char *argv[])
{
	char arr[20];

	printf("Enter characters: ");
	scanf("%10c", arr);

	for(int i = 0; i < 20; i++){
		printf("%s - ", arr[i]);
	}

	printf("\n");
	return 0;
}

