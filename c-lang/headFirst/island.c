#include <stdio.h>

typedef struct Island {
	char *name;
	char *opens;
	char *closes;
	struct Island *next;
} Island;

void display( Island * start)
{
	Island *i = start;

	for(; i != NULL; i= i->next)
	{
		printf("Name: %s open: %s closes: %s \n", i->name, i->opens, i->closes);
	}
}

int main()
{
	Island amity =  {"Amity", "09:00", "17:00", NULL};
	Island craggy = {"Craggy", "09:00", "17:00", NULL};
	
	Island isla_nublar =  {"Isla Nublar", "09:00", "17:00", NULL};

	Island shutter = {"Shutter", "09:00", "17:00", NULL};


	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;

	Island skull = {"Skull", "09:00", "17:00", NULL};

	isla_nublar.next = &skull;
	skull.next = &shutter;

	display(&amity);

	return 0;
}
