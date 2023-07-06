#include <stdio.h>
#define YES 100
#define NO 200

int main(void){
	
	int x;
	printf("Type a number: \n");
	scanf("%i", &x);
	
	if(x <= 10){
		printf("%i \n", YES);
	}else{
		printf("%i \n", NO);
	}
	return 0;
}
