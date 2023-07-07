#include <stdio.h>

int main(void){
	
	int vector1[3] = {1, 2, 3};
	int *pointer1 = vector1;
	
	printf("%i \n", *pointer1);
	
	int vector2[3] = {4, 5, 6};
	int *pointer2 = &vector2[2];
	
	printf("%i \n", *pointer2);
	
	return 0;
}
