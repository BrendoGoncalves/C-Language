#include <stdio.h>

int main(void){
	
	FILE *paper;
	paper = fopen("text.txt", "a");
	
	fprintf(paper, "I wash the dishes\n");
	
	char string[] = "You speak english\n";
	char letter = 'z';
	
	fputs(string, paper);
	fputc(letter, paper);
	
	fclose(paper);
	
	return 0;
}
