#include <stdio.h>

int main(void){
	
	FILE *pointer = fopen("text.txt", "r");
	char carct[100];
	
	int i = 0;
	while((carct[i] = fgetc(pointer)) != EOF){
		++i;
	}
	
	carct[i] = '\0';
	
	printf("%s", carct);
	
	return 0;
}
