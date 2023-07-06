#include <stdio.h>

int main(void){
	
	int x = 0;
	int y[1] = {1};
	
	void sum(int w, int z[1]);
	sum(x, y);
	
	printf("%i %i \n", x, y[1]);
	return 0;
}

void sum(int w, int z[1]){
	
	++w; //copy
	z[1] = 2; //memory
	
	printf("%i %i \n", w, z[1]);
}
