#include <stdio.h>

int main(void){
	
	char a[40];
	
	int quantity(char b[]);
	
	printf("Digit a word, please: ");
	scanf("%s", a);
	
	int x = quantity(a);
	printf("Caracteres\'s quantity: %i", x);
	
	return 0;
}

int quantity(char b[]){
	
	int i = 0;
	while(b[i] != '\0'){
		++i;
	}
	return i;
}
