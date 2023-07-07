#include <stdio.h>

int a = 1;

int main(void){
	
	void sum(void);
	sum();
	sum();
	
	return 0;
}

void sum(void){
	
	int b = 2;
	static int c = 3;
	
	a *= 2;
	b *= 2;
	c *= 2;
	printf("%i %i %i ", a, b, c);
}
