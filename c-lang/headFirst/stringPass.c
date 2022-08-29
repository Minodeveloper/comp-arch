#include <stdio.h>

void fortune_cookie( char msg[] )
{

	printf("Messaage is: %s\n", msg);
	printf("Message occupies: %li bytes\n", sizeof msg);

	printf("The quote is stored at %p\n", msg);
}


int main(void){

	char quote[] = ("MADHURESH.\n");

	fortune_cookie(quote);

	return 0;

}
