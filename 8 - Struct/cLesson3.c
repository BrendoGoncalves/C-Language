#include <stdio.h>

struct color{
	int black;
	int white;
};

int main(void){
	
	struct color pen = {8, 6};
	void mix(struct color pencil);
	mix(pen);
	
	return 0;
}

void mix(struct color pencil){
	
	pencil.black /= 2;
	pencil.white /= 2;
	
	printf("%i %i", pencil.black, pencil.white);
}
