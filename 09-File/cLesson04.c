#include <stdio.h>

int main(void){
	
	FILE *pointer;
	pointer = fopen("text.txt", "r");
	
	char string[100];
	
	if(pointer == NULL){
		return 0;
	}
	
	while(fgets(string, 100, pointer) != NULL){
		printf("%s", string);
	}
	return 0;
}
