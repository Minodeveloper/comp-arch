#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int randomInt = (rand() % 3)+1 ;
	char *quote[] = {
		"Done is better than perfect.",
		"You are limitless",
		"The universe has your back."
	};

	printf("%d \n", randomInt);

	printf("quote [%d] stored at %p  %s\n",randomInt, quote[randomInt], quote[randomInt]);

	

	return 0;
}
