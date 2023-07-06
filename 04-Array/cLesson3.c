#include <stdio.h>

int main(void){
	
	float w[3];
	float a;
	
	int n = 0;
	do{
		printf("Weight %i: ", n + 1);
		scanf("%f", &w[n]);
		a += w[n];
		++n;
	}while(n <= 2);
	
	printf("Average weight: %.4f", a / (float)n);
	
	return 0;
}
