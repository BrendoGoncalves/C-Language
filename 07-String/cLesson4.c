#include <stdio.h>

int main(void){

	char array[][5] = {"red", "blue", "green"};
	
	int k;
	
	for(k = 0; k < 3; ++k){
		printf("%s \n", array[k]);
	}
	return 0;
}
