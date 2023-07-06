#include <stdio.h>

int main(void){
	
	void function(char *pointer);
	
	char x[] = {"Dolphin"};
	function(x);
	
	char y[] = {"Shark"};
	function(y);
	
	return 0;
}

void function(char *pointer){
	
	while(*pointer != '\0'){
		printf("%p %c \n", pointer, *pointer);
		++pointer;
	}
}
