#include <stdio.h>

int main(int argc, char *argv[])
{
	char alphabet;

	while(1)
	{
	
		printf("Enter a character: ");
		scanf("%c", &alphabet);
		printf("%d\n", alphabet);
		if(alphabet == 10)continue;
		if(alphabet == 'q') break;
	}

	return 0;
}
