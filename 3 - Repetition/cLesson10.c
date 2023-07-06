#include <stdio.h>

int main(void){
	
	char letter;
	
	while((letter = getchar()) != '\n'){
		switch(letter){
			case 'a':
			case 'A':
				printf("Letter A \n");
				break;
			case 'b':
			case 'B':
				printf("Letter B \n");
				break;
			default:
				printf("No Letter A No Letter B \n");
				break;
		}
	}
	return 0;
}
