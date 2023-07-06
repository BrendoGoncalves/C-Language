#include <stdio.h>

int main(void){
	
	void buffer(void);
	char a, b, c;
	
	a = getchar();
	buffer();
	b = getchar();
	buffer();
	c = getchar();
	buffer();
	
	printf("%c %c %c", a, b, c);
	
	return 0;
}

void buffer(void){
	char x;
	while((x = getchar()) != '\n' && x != EOF);
}
