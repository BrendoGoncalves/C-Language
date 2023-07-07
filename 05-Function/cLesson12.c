#include <stdio.h>

int main(void){
	
	void compare(char x[], char y[]);
	compare("water", "water");
	
	return 0;
}

void compare(char x[], char y[]){
	
	int i = 0;
	while(x[i] == y[i] && x[i] != '\0'){
		++i;
	}
	
	if(x[i] == y[i] && x[i] == '\0'){
		printf("Equals");
	}else{
		printf("Different");
	}	
}
