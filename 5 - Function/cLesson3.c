#include <stdio.h>

int main(void){
	
	float size = 4.5;
	float area(float size);
	
	printf("The area of the square is %.2f", area(size));
}

float area(float size){
	
	return size * size;
}
