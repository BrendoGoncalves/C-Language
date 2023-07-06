#include <stdio.h>

int main(void){
	
	int x = 1, y = 2;
	
	int *p = &x;
	
	*p = y;
	
	printf("%i %i \n", x, y);
	
	return 0;
}
