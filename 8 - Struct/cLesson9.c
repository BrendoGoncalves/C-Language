#include <stdio.h>

int main(void){
	
	struct employer{
		char name[20];
		int old;
		//int old2 = 10; //Wrong
		char gender;
		float *weight;
		//struct employer jon; //Wrong
		struct employer *mary; //Right
	};
	return 0;
}
