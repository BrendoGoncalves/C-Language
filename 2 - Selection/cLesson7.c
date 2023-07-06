#include <stdio.h>

int main(void){
	
	int i;

	printf("1? ");
	scanf("%i", &i);
	
	printf("%s", i == 1 ? "Number One" : "Other Number");
	
	return 0;
}
