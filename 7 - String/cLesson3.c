#include <stdio.h>

int main(void){
	
	char a[20];
	char b;
	
	int i = 0;
	do{
		b = getchar();
		a[i] = b;
		++i;
	}while(b != '\n');
	
	a[i] = '\0';
	
	printf("%s ", a);
	
	return 0;
}
