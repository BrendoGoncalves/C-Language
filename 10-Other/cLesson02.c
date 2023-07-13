#include <stdio.h>
#define PI 3.14
#define NUL 0

int main(void){
	
	float radius;
	int i = 2;
	float circle(float radius);
	
	while(i > NUL){
		printf("Circle\'s radius: ");
		scanf("%f", &radius);
		printf("%.3f \n", circle(radius));
		--i;
	}
	return 0;
}

float circle(float radius){
	return radius * radius * PI;
}
