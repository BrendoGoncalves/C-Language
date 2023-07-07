#include <stdio.h>

int main(void){
	
	int i;
	
	printf("1? ");
	scanf("%i", &i);
	
	i == 1 ? printf("Number One \n") : printf("Other Number \n");
	
	getchar();
	
	return 0;
}
