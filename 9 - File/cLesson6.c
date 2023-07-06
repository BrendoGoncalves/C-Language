#include <stdio.h>

int main(void){
	
	void copy(FILE *paper1, FILE *paper2);
	
	FILE *pointer1 = fopen("text.txt", "r");
	
	FILE *pointer2 = fopen("text2.txt", "w");
	
	copy(pointer1, pointer2);
	
	fclose(pointer1);
	fclose(pointer2);
	
	return 0;
}

void copy(FILE *paper1, FILE *paper2){
	
	char list[100];
	
	while(fgets(list, 500, paper1) != NULL){
		fputs(list, paper2);
	}
}
