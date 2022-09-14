#include <stdio.h>

int main(int argc, char *argv[])
{	
	char full_name[] ={
		'Q','A','D','H',
		'U','R','E','S','H',
		' ','K','.',' ',
		'C','H','O','U','D','H','A','R','Y'
	};

	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Madhuresh";
	areas[0] = 90;
	name[0]= 'K';

/*	char full_name[] = {
		'Q','A','D','H',
		'U','R','E','S','H',
		' ','K','.',' ',
		'C','H','O','U','D','H','A','R','Y'
	};// removed \0 from last
*/
	printf("The sizeof INT: %ld\n", sizeof(int));
	printf("------------------------------\n");
	printf("The sizeof areas (int[]): %ld\n", sizeof(areas));
	printf("------------------------------\n");
	printf("The number of ints in areas: %ld\n",sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd %d.\n", areas[0],areas[10]);
	printf("------------------------------\n");

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));

	printf("------------------------------\n");
	printf("The size of full_name (char[]): %ld\n",sizeof(full_name));
	printf("The number of chars: %ld\n",sizeof(full_name)/sizeof(char));
       	printf("name=\"%s\" and full_name=\"%s\"\n", name,full_name);

	return 0;
}
