#include <stdio.h>

int main(void){
	
	int a = 1;
	short int b = 2;
	long int c = 3;
	
	//printf("%i %i %i \n", sizeof(a), sizeof(b), sizeof(c));
	printf("%d %hd %ld \n", a, b, c);
	
	signed int d = -3;
	unsigned int e = 3;
	printf("%d %hu \n", d, e);
	
	const int f = 1;
	//++f;
	printf("%i ", f);
	
	return 0;
}
