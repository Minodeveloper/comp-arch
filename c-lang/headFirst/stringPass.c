#include <stdio.h>

void fortune_cookie( char msg[] )
{

	printf("Messaage is: %.2s\n", msg);
}

int main(void){

	//char quote[] = "You are going to successful.\n";
	char quote[] =  {97,98,99 };

	fortune_cookie(quote);

	return 0;

}
