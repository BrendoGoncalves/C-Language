#include <stdio.h>

int main(void){
	
	char x[20];
	
	printf("Dog\'s name: ");
	scanf("%s", x);
	
	void comand(char y[]);
	comand(x);
}

void comand(char y[]){
	printf("Sit %s, nice dog!", y);
}
