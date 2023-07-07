#include <stdio.h>

int main(void){
	
	int a = 2, b = 7;
	float c, d;
	//Casting
	c = (float)b / a;
	d = b % a;
	
	printf("%f \n", c);
	printf("%.2f %.3f \n", c, 9.38597);
	printf("%f \n", d);
	printf("%8i \n", a);
	
	return 0;
}
