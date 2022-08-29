#include <stdio.h>

int main(void)
{
	char s[] = ("DICK\n");

	char *t = s;

	printf("size of s is %li \n", sizeof(s));
	printf("size of s is %li \n", sizeof(t));
	printf("%b\n", &s == s);
	

	
	return 0;

}

	
