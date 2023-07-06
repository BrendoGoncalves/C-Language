#include <stdio.h>

int main(void){
	
	char v[4] = {'a', 'b', 'c', 'd'};
	
	int i;
	for(i = 0; i <= 3; i += 1){
		printf("%c ", v[i]);
	}
	return 0;
}
