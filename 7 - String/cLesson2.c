#include <stdio.h>

int main(void){
	
	char n1[20];
	char n2[20];
	
	printf("First and second name: ");
	scanf("%s %s", n1, n2);
	
	printf("Thank you, %s %s", n1, n2);
	getchar();
}
