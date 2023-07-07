#include <stdio.h>

int main(void){
	
	int x;
	
	printf("Number: ");
	scanf("%i", &x);
	
	if(!(x == 5)){
		printf("No five \n");
	}else{
		printf("Five \n");
	}
	return 0;
}

