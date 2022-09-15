#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc);
	for(i = 1; i < 20; i++)
	{
		if( (i - (argc-1) )  == 10)continue;
		printf("arg %d: %s\n", i, argv[i]);
	}


	char *states[] = {
		"Calirfornia", "Oregon",
		"Washington",NULL 
	};

	int num_states = 4;

//	argv[1] = "KOKOLALA";

	for(i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
