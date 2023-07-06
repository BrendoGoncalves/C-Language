#include <stdio.h>

int main(void){
	
	int x = 1;
	//int y = 2;
	int  *const px = &x;
	
	x = 3;
	//px = &y; Wrong
	
	printf("%i \n", *px);
	
	*px = 4;
	printf("%i %i\n", *px, x);
	
	return 0;
}
