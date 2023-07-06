#include <stdio.h>
#define BIGGER(x, y) x > y ? x : y
#define LETTER(char) char >= 'a' && char <= 'b'

int main(void){
	
	char x = 'A';
	
	if(LETTER(x)){
		printf("White \n");
	}else{
		printf("Black \n");
	}
	
	printf("%i", BIGGER(100, 50));
	
	return 0;
}
