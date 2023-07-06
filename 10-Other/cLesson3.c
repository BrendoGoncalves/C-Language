#include <stdio.h>
#define PI 3.14
#define TWO_PI 2 * PI
#define AREA_CIRCLE(radius) radius * radius * PI

int main(void){
	
	printf("%f \n", PI);
	printf("%f \n", TWO_PI);
	printf("%f \n", AREA_CIRCLE(3));
	
	return 0;
}
