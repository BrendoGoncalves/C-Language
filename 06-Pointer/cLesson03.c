#include <stdio.h>

int main(void){
	
	int x = 7;
	char y = 'a';
	double z = 1.9;
	
	int *px = &x;
	char *py = &y;
	double *pz = &z;
	
	*pz = 2 * (*pz);
	
	printf("%i %c %f \n", *px, *py, *pz);
	
	return 0;
}
