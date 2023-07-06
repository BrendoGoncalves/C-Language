#include <stdio.h>

int main(void){
	
	FILE *pointer;
	int x, y, z;
	
	pointer = fopen("number.txt", "r");
	
	if(pointer == NULL){
		printf("This file don\'t exist.");
		return 0;
	}
	
	fscanf(pointer, "%i %i %i", &x, &y, &z);
	fclose(pointer);
	
	printf("%i %i %i", x, y, z);
	
	return 0;
}
