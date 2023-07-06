#include <stdio.h>

int main(void){
	
	void function(const char *pointer);
	
	char x[6] = {"Whale"};
	function(x);
	
	char y[] = {"Shark"};
	function(y);
	
	return 0;
}

void function(const char *pointer){
	
	for( ; *pointer != '\0'; ++pointer){
		printf("%c", *pointer);
	}
	
}
