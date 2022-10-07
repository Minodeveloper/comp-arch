#include <stdio.h>

#define PAGELEN 24
#define LINELEN 512

void do_more(FILE *);

int see_more();

int main (int argc, char *argv[])
{
	FILE *fp;

	if( argc == 1)
	{
		do_more(stdin);
	}
	else
	{
		while(--argc)
		{
			if( (fp = fopen( *++argv, "r") ) != NULL)
			{
				do_more(fp);
				fclose(fp);
			}
			else
			{
				exit(1);
			}
		}
	}

	return 0;
}



void do_more( FILE *fp)
{
	char line[LINELEN];
	int num_of_lines = 0;
	int see_more()
