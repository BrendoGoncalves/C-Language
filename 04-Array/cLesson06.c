#include <stdio.h>

int main(void){
	
	int a[3][3] = {{1, 2, 3}, {4, 555, 6}, {7, 8, 9}};
	a[1][1] = 5;
	
	int m, n;
	for(m = 0; m < 3; ++m){
		for(n = 0; n < 3; ++n){
			printf("%i ", a[m][n]);
		}
		printf("\n");
	}
	return 0;
}
