#include <stdio.h>

int main(void){
	
	char x;
	
	while((x = getchar()) != '\n'){
		putchar(x);
	}
	
	return 0;
}
