#include <stdio.h>

void copy(char *pointer1, char *pointer2){
	
	while(*pointer1 != '\0'){
		*pointer2 = *pointer1;
		++pointer1;
		++pointer2;
	}
	*pointer2 = '\0';
}

int main(void){
	
	void copy(char *pointer1, char *pointer2);
	
	char string1[] = "World";
	char string2[5];
	
	copy(string1, string2);
	
	printf("%s", string2);
	
	return 0;
}
