#include <stdio.h>

int main(void){
	
	FILE *pointer;
	pointer = fopen("text.txt", "r");
	
	char carct[100];
	
	fgets(carct, 100, pointer);
	printf("%s", carct);
	
	freopen("text2.txt", "r", pointer);
	fgets(carct, 100, pointer);
	printf("%s", carct);
	
	return 0;
}
