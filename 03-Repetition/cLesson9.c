#include <stdio.h>

int main(void){
	
	int x;
	
	for(x = 0; x <= 20; x += 2){
		if(x == 10){
			continue;
			printf("%i ", x);
		}else{
			printf("%i ", x);
		}
	}
	return 0;	
}
