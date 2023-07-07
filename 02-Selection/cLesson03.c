
#include <stdio.h>

int main(void){
	
	char x;
	int i;
	
	printf("Letter: (a or b) \n");
	scanf("%c", &x);
	printf("Number: (0 or 1) \n");
	scanf("%i", &i);
	
	if(x != 'a' &&  i != 0){
		printf("Sky \n");
	}else if(x == 'b' || i == 1){
		printf("Ocean \n");
	}else{
		printf("Land \n");
	}
	return 0;
}
