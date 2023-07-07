#include <stdio.h>

int main(void){
	
	FILE *pointer;
	pointer = fopen("C:\\Users\\brend\\OneDrive\\Documentos\\C language\\text.txt", "w");
	fprintf(pointer, "I eat eggs for breakfast \nYou drink water in the morning \n");
	fclose(pointer);
	
	return 0;
}
