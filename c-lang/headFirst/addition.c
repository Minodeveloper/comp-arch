#include <stdio.h>

#include "adder.h"


int main(int argc, char *argv[])
{
	int sum = add(9,6);

	printf("The sum is %3d. \n", sum);

	return 0;
}


int add(int a, int b){

	return a + b;
}

