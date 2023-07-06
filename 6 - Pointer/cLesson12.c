#include <stdio.h>

int main(void){
	
	int x = 1;
	
	void function(int *pointer);
	function(&x);
	
	printf("%i", x);
	return 0;
}

void function(int *pointer){
	
	*pointer = 8 * (*pointer);
	
}
