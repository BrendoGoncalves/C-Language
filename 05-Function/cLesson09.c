#include <stdio.h>

int main(void){
	
	int q[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int n;
	
	printf("Number\'s multiplication table: ");
	scanf("%i", &n);
	
	void table(int t[][3], int m);
	table(q, n);
	
	int i, j;
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			printf("%i * %i = %i \n", q[i][j] / n, n, q[i][j]);
		}
	}
	
	return 0;
}

void table(int t[][3], int m){
	
	int i, j;
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			t[i][j] *= m;
		}
	}
}
