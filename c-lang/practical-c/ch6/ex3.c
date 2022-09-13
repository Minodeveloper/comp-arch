#include <stdio.h>

char printSymbol( float scoreDigits){

	int lastDigit  = (int)scoreDigits % 10;

	switch(lastDigit){
		case 1:
		case 2:
		case 3: return '-';
		case 8:
		case 9:
		case 0:return '+';
		
		default: return ' ';
	}

}

int main(void){

	float score;

	printf("Enter your exam score: ");
	scanf("%f", &score);
	printf("\n");

	if(score >= 91 && score <= 100){
		
		printf("GRADE : A%c \n", printSymbol(score));

	}else if(score >= 81 && score <= 90){

		printf("GRADE : B%c \n",printSymbol(score) );

	}else if(score >= 71 && score <= 80){

		printf("GRADE : C%c \n", printSymbol(score));

	}else if(score >= 61 && score <= 70){

		printf("GRADE : D%c \n", printSymbol(score));

	}else {

		printf("GRADE : F \n");

	}


	return 0;
}

