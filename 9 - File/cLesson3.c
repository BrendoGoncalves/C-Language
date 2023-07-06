#include <stdio.h>

int main(void){
	
	FILE *pointer;
	pointer = fopen("text.txt", "r");
	
	char string[100];
	
	fgets(string, 100, pointer);
	printf("%s", string);
	
	return 0;
}
