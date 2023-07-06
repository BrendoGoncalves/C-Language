#include <stdio.h>

int main(void){
	
	char *suit[4] = {"Diamonds", "Clubs", "Hearts", "Spade"};
	
	printf("%s %p ", suit[0], suit);
	
	return 0;
}
