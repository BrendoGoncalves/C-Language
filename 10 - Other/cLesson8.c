#include <stdio.h>

int main(void){
	
	char x[] = "egg";
	
	printf("%s", x);
	putc('s', stdout);
	putc(x[2], stdout);
	
	printf("\n");
	
	int i = 0;
	while(x[i] != '\0'){
		putc(x[i], stdout);
		++i;
	}
	
	return 0;
}
