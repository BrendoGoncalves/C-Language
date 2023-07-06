#include <stdio.h>

int main(void){
	
	int i;
	int j = 20;
	
	for(i = 1; i < j / 2 && i != 0; ++i, j -= 2){
		printf("%i %i \n", i, j);
	}
	
	return 0;
}
