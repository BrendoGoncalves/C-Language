#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int *p = (int *) malloc(sizeof(int));
	*p = 100;
	
	if(p == NULL){
		printf("malloc = null");
	}
	
	printf("%i \n", *p);
	
	free(p);
	
	printf("%i \n", *p);
	
	return 0;
}
