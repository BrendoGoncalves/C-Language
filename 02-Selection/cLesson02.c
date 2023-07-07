#include <stdio.h>

int main(void){
	
	int n;
	point:
		
	printf("Choose a number between 0 and 10:");
	scanf("%i", &n);
	
	if(n >= 0 && n <= 5){
		printf("Blue \n");
	}else if(n >= 6 && n <= 10){
		printf("Red \n");
	}else{
		printf("Invalid option! \a\n");
		goto point;
	}
	return 0;
}
