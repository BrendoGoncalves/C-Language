#include <stdio.h>

int main(void){
	
	char list[100];
	
	fgets(list, 100, stdin);
	printf("%s", list);
	
	freopen("text.txt", "r", stdin);
	fgets(list, 100, stdin);
	printf("%s", list);
	
	return 0;
}
