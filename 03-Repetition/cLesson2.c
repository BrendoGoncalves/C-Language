#include <stdio.h>

int main(void){
	
	int x, y = 1;
	
	printf("Number factorial: ");
	scanf("%i", &x);
	
	for( ; x >= 1; --x){
		y = y * x;
	}
	printf("%i", y);
	
	return 0;
}
