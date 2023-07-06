#include <stdio.h>

int main(void){
	
	struct ocean{
		int whale;
		int shark;
	};
	
	struct ocean blue, *white;
	white = &blue;
	
	(*white).whale = 1;
	white->shark = 2;
	
	printf("%i %i \n", blue.whale, blue.shark);
	
	(*white).whale = 28 % 5;
	white->shark = 16 / 4;
	
	printf("%i %i \n", (*white).whale, white->shark);
	
	return 0;
}
