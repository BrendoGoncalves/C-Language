#include <stdio.h>

int main(void){

	enum color {red, yellow, blue = 4, green};
	enum color paint;
	
	printf("%i %i \n", yellow, green);
	
	paint = blue;	
	printf("%i %i \n", paint, red);
	
	if(paint == red){
		printf("Red \n");
	}else{
		printf("No Red \n");
	}	
	return 0;
}
