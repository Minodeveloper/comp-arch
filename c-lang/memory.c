#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	char *address = (char *) malloc(sizeof(char));
	
	*address = 'A';

	return 0;
}
