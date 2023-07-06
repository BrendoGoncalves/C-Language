#include <stdio.h>

int main(void){
	
	int x, y;
	
	printf("Factorial: ");
	scanf("%i", &x);
	
	int factorial(int z);
	y = factorial(x);
	printf("%i", y);
	
	return 0;
}

int factorial(int z){
	
	if(z == 0){
		return 1;
	}else{
		return z * factorial(z - 1);
	}
}
