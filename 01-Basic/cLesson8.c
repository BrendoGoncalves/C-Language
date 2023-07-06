#include <stdio.h>

int main(void){
	
	int x = 0, y = 1;
	//Pre-increment
	x = ++y;
	printf("%i %i \n", x, y);
	//Post-increment
	x = y++;
	printf("%i %i \n", x, y);
	printf("%i %i \n", x++, y--);
	printf("%i %i \n", x, y);
	
	return 0;
}
