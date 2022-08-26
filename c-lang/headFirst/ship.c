#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;

}

int main(void)
{
	int latitude = 32;
	int longitude = -64;

	printf("Address of latitude is %p\n", &latitude);
	printf("Address of longitude is %p\n", &longitude);

	go_south_east(&latitude, &longitude);

	printf("Avast! Now at [%i, %i]\n", latitude, longitude);

	return 0;
}

