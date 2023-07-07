#include <stdio.h>

int main(void){
	
	int v[3];
	
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	
	int i = 2;
	while(i >= 0){
		printf("%i ", v[i]);
		--i;
	}
	return 0;
}
