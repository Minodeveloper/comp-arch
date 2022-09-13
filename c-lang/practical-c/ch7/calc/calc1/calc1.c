#include <stdio.h>


char line[100];
int result;
char operator;
int value;

int main(int argc, char *argv[])
{
	result = 0;

	while(1)
	{
		printf("Enter operator and number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);
		if(operator == 'q') break;

		switch(operator){
			case '+':
				result = result + value;
				printf("result %d\n", result);
				break;
			default:
				printf("UNKNOWN OPERATOR %c\n", operator);
				break;
		}
	}

	return 0;
}
