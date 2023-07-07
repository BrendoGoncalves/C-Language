#include <stdio.h>

int main(void){
	
	int vector1[5] = {0, 1, 2, 3, 4};
	int vector2[5] = {5, 6, 7, 8, 9};
	
	int i = 0;
	do{
		printf("%d ", vector2[vector1[i]]);
		++i;
	}while(i < 5);
	
	return 0;
}
