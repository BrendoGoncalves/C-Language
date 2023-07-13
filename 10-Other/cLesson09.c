#include <stdio.h>

int main(void){
	
	char x[10];
	//Warning
	gets(x);
	
	printf("%s", x);
	
	return 0;
}
