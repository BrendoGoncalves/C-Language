#include <stdio.h>

int main(void){
	
	short int i, j;
	
	for(i = 0, j = 1; i < 9 && j < 10; ++i, ++j){
		printf("%i%i ", i, j);
		if(j % 3 == 0){
			printf("\n");
		}
	}
	return 0;
}
