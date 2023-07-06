#include <stdio.h>

int main(void){
	
	int v[] = {1, 2, 3, 4};
	int a[][2] = {{11, 22}, {33, 44}};
	
	int x = 0;
	do{
	   printf("%i ", v[x]);
	   ++x;	
	}while(x < 4);
	
	printf("%i %i ", a[0][0], a[0][1]);
	printf("%i %i ", a[1][0], a[1][1]);
	
	return 0;
}
