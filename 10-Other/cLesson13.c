#include <stdio.h>

int main(void){
	
	char a, b, c;
	
	a = getchar();
	fflush(stdin);
	b = getchar();
	fflush(stdin);
	c = getchar();
	fflush(stdin);
	
	printf("%c %c %c", a, b, c);
	
	return 0;
}
