#include <stdio.h>

int main(void){
	
	int a[10] = {8, 3, 6, 1, 9, 2, 7, 0, 5, 4};
	
	void organize(int b[10]);
	organize(a);
	
	int i;
	for(i = 0; i < 10; ++i){
		printf("%i ", a[i]);
	}
	return 0;
}

void organize(int b[10]){
	
	int x , y, z;
	
	for(x = 0; x < 10; ++x){
		for(y = x + 1; y < 10; ++y){
			if(b[x] > b[y]){
			z = b[y];
			b[y] = b[x];
			b[x] = z;
			}
		}
	}
}
