#include <stdio.h>

int main(void){
	
	union number{
	    int x;
	    double y;
	};
	
	union number value;
	
	value.x = 1;
	value.y = 3.52;
	
	printf("%i %f ", value.x, value.y);
	
	return 0;
}
