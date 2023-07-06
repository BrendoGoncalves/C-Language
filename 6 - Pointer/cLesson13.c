#include <stdio.h>

int main(void){
	
	void test1(int y);
	void test2(int *py);
	
	int x = 1, *px;
	px = &x;
	
	test1(x);
	printf("%i ", x);
	
	test2(px);
	printf("%i ", *px);
	
	return 0;
}

void test1(int y){
	++y;
}

void test2(int *py){
	++*py;
}
