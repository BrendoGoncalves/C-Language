#include <stdio.h>

int main(void){
	
	char a[] = {'N','e','v','e','r', ' '};
	char b[] = {'g','i','v','e',' ', 'u', 'p'};
	char c[14];
	
	void concatenete(char d[], char e[], char f[]);
	concatenete(a, b, c);
	
	printf("%s ", c);
	
	return 0;
}

void concatenete(char d[], char e[], char f[]){
	
	int i, j;
	for(i = 0; i < 6; ++i){
		f[i] = d[i];
	}
	for(j = 0; j < 8; ++j){
		f[i + j] = e[j];
	}
	f[i + j - 1] = '\0';
}
