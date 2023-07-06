#include <stdio.h>

struct color{
	int black;
	int white;
};

int main(void){
	
	struct color pen1, pen2 = {5, 7};
	struct color mix(struct color pencil);
	pen1 = mix(pen2);
	
	printf("%i %i", pen1.black, pen1.white);
	return 0;
}

struct color mix(struct color pencil){
	
	pencil.black *= 2;
	pencil.white *= 2;
	
	return pencil;
}
