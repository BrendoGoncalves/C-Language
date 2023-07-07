#include <stdio.h>
#include <stdbool.h>

int main(void){
	
	int x;
	
	bool option(int y);
	
	printf("Digit a number, please: ");
	scanf("%i", &x);
	if(option(x)){
		printf("Positive");
	}else{
		printf("Negative");
	}
}

bool option(int y){
	
	if(y >= 0){
		return true;
	}else{
		return false;
	}
}
