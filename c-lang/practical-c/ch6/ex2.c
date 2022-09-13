#include <stdio.h>


int main(void){

	float score;

	printf("Enter your exam score: ");
	scanf("%f", &score);
	printf("\n");

	if(score >= 91 && score <= 100){
		
		printf("GRADE : A \n");

	}else if(score >= 81 && score <= 90){

		printf("GRADE : B \n");

	}else if(score >= 71 && score <= 80){

		printf("GRADE : C \n");

	}else if(score >= 61 && score <= 70){

		printf("GRADE : D \n");

	}else {

		printf("GRADE : F \n");

	}


	return 0;
}

