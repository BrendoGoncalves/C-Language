#include <stdio.h>

int main(void){
	
	struct ocean{
		int *pwhale;
		int *pshark;
	}blue;
	
	int whale = 7;
	int shark = 9;
	
	blue.pwhale = &whale;
	blue.pshark = &shark;
	
	printf("%i %i", *blue.pwhale, *blue.pshark);
	
	return 0;
}
