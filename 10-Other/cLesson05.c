#include <stdio.h>

int main(void){
	
	char carct[3];
	
	carct[0] = getc(stdin);
	carct[1] = fgetc(stdin);
	
	printf("%c %c", carct[0], carct[1]);
	
	return 0;
}
