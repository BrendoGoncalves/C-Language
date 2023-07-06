#include <stdio.h>

int main(void){
	
	int x = 1;
	
	printf("%i %p \n", x, &x);
	
	int *p;
	p = &x;
	
	printf("%i %p \n", *p, p);
	
	return 0;
}
