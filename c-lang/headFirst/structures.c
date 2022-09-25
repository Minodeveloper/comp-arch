#include <stdio.h>

typedef struct {
	char *name;
	int age;
	int weight;
	float height;
	struct adharData * friend;
} adharData;

void print_data(struct adharData * data)
{
	printf("name : %s \n", data->name);
	printf("Age: %d \n", data->age);
	printf("weight: %d \n", data->weight);
	printf("height: %.2f \n", data->height);
//	if (data->friend != NULL)print_data(data->friend);
}

int main(int argc, char *argv[])
{
	adharData Madhuresh = { "minoshi", 26, 96, 6.1, &Madhu };
	adharData Madhu = { "ipnoshi", 46, 86, 6.1};

	print_data(&Madhuresh);

	return 0;
}

