#include <stdio.h>

typedef struct Island{
	char *name;
	char *opens;
	char *closes;

	struct Island *next;
}Island;

void display(Island * address)
{
	Island *x = address;

	while( x != NULL)
	{
		printf("we are going to %s at %s and coming back at %s\n", x->name,
				x->opens, x->closes);
		 x = x->next;
	}
}
int main(int argc, char *argv[])
{
	Island andaman = {"Andaman Nicobar", "09:00 AM", "06:00 PM", NULL};
	Island greed = {"Greed", "09:00 AM", "06:00 PM", NULL};
	andaman.next = &greed;

	display(&andaman);


	return 0;
}
