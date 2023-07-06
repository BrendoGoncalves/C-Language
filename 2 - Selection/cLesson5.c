#include <stdio.h>

int main(void){
	
	int n;
	
	printf("Number: (0-9)\n");
	scanf("%i", &n);
	
	switch(n){
		case 1:
			printf("Hi! \n");
			break;
		case 2:
			printf("Hello! \n");
			break;
		default:
		    printf("Thanks \n");
		    break;
	}
	
	return 0;
}
