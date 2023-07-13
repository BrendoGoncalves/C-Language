#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int *p = (int *)calloc(3, sizeof(int)); //start values equals 0
	//int *p = (int *)malloc(3 * sizeof(int));
	
	printf("%i \n", *p);
	
	*(p + 1) = 7;
	
	printf("%i \n", *(p + 1));
	printf("%i  %i \n", p[1], &p[1]);
	
	p[2] = 9;
	
	printf("%i \n", p[2]);
	
	return 0;
}
