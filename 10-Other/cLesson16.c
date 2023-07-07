#include <stdio.h>

int main(void){
	
	struct ocean{
		int fish;
		int shark;
		int whale;
	}blue;
	
	int x;
	double y;
	char w[10];
	int z[3][3];
	int *p;
	
	printf("%li \n", sizeof(x));
	printf("%li \n", sizeof(y));
	printf("%li \n", sizeof(w));
	printf("%li \n", sizeof(z));
	printf("%li \n", sizeof(blue));
	printf("%li \n", sizeof(p));
	printf("%li \n", sizeof(int));
	printf("%li \n", sizeof(char));
	
	return 0;
}
