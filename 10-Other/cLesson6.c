#include <stdio.h>

int main(void){
	
	int i = 0;
	char carct[10];
	
	while((carct[i] = fgetc(stdin)) != '\n'){
		++i;
	}
	
	carct[i] = '\0';
	
	printf("%s", carct);
	
	return 0;
}
