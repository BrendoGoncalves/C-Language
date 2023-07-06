#include <stdio.h>

int main(void){
	
	struct ocean{
		int shark;
		int whale;
	};
	
	struct ocean deep[2] = {{1, 2}, {3, 4}};
	
	int i;
	for(i = 0; i < 2; ++i){
		printf("Shark %i - Whale %i \n", deep[i].shark, deep[i].whale);
	}
	return 0;
}
