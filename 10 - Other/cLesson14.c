#include <stdio.h>

int main(void){
	
	char a, b, c;
	
	a = getchar();
	setbuf(stdin, NULL);
	b = getchar();
	setbuf(stdin, NULL);
	c = getchar();
	setbuf(stdin, NULL);
	
	printf("%c %c %c", a, b, c);
	
	return 0;
}
