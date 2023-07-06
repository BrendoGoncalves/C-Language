#include <stdio.h>

int main(void){
	
	int vector[4] = {1, 3, 5, 7};
	int *pointer = vector;
	
	printf("%p \n", pointer);
	
	pointer = &vector[1];
	printf("%p \n", pointer);
	
	++pointer;
	printf("%i \n", *pointer);
	
	*(++pointer) = 10;
	printf("%i \n", vector[3]);
	
	return 0;
}
