#include <stdio.h>

int main(void){
	
	int a = 1, b = 2, c = 4, d = 5;
	
	a = a + 1;
	b *= 2;
	--c;
	d %= b;
	
	printf("%d %d %d %d", a, b, c, d + a);
	
	return 0;
}
