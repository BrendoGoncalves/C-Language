#include <stdio.h>

int main(void){
	
	float x[8] = {41, 73, 19};
	
	int y;
	for(y = 0; y <= 7; ++y){
		x[6] = 36;
		x[7] = 98;
		printf("%f ", x[y]);
	}
	return 0;
}
