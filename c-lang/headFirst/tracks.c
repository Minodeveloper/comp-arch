/*
	program to practise array of arrays and strings library
*/

#include <stdio.h>
#include <string.h>


	char tracks[][80] = {

		"I left my heart in Harvard Med School",
		"Newark, Newark - a wanderful town",
		"Dancing with the dork",
		"From here to maternity",
		"The girl from Iwo Jima"
	};

void findTrack(char songIwant[]){
	int i;

	for(i = 0; i < 5; i++){

	//printf("song finefe called\n");
	//printf("%s   %s   %p \n", tracks[i], songIwant, strstr(tracks[i], songIwant));
	 
		if(strstr(tracks[i], songIwant))
		{
			printf("Track %i:  '%s'\n", i, tracks[i]);
		}
	}
}

int main(void)
{

	char songsIwant[80];
	printf("Search for: ");
	//fgets(songsIwant, 80, stdin);
	scanf("%s", &songsIwant);
	findTrack(songsIwant);

	return 0;

}
