
#include <stdio.h>

int main(void){
	
	float x, y;
	
	printf("Number: ");
	scanf("%f", &x);
	
	float half(float z);
	y = half(x);
	printf("%.2f", y);
	
	return 0;
}

float half(float z){
	
	return z / 2;
}
