#include <stdio.h>

int main(void){
	
	int x, y;
	
	printf("Type a positive number, please: ");
	scanf("%i", &x);
	
	if(x > 0){
		for( ; x > 0; x /= 10){
		y = x % 10;
		printf("%i", y);
		}
	}else{
		printf("Just positive number, please. \a");
	}	
	return 0;
}
