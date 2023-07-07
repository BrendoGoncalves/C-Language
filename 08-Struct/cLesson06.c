#include <stdio.h>

struct ocean{
	int shark;
	int whale;
};

int main(void){
	
	void white(struct ocean blue[]);
	
	struct ocean green[2];
	green[0].shark = 3;
	green[0].whale = 7;
	green[1].shark = 5;
	green[1].whale = 1;
	white(green);
	
	return 0;
}

void white(struct ocean blue[]){
	
	blue[0].shark *= 9;
	blue[0].whale *= 9;
	blue[1].shark *= 9;
	blue[1].whale *= 9;
	
	int i;
	for(i = 0; i < 2; ++i){
		printf("Shark %i - Whale %i ", blue[i].shark, blue[i].whale);
	}
	
}
