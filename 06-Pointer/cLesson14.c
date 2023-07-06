#include <stdio.h>

int sum(int vector2[], const int n){
	
	int add = 0;
	int *pointer;
	int *const final = vector2 + n;
	
	for(pointer = vector2; pointer < final; ++pointer){
		add += *pointer;
	}
	return add;	
}

int main(void){
	
	int sum(int vector2[], const int n);
	int vector1[4] = {8, 8, 8, 8};
	
	printf("The vector\'s sum is %i \n", sum(vector1, 4));
	
	return 0;
}
