#include <stdio.h>

int main(void){
	
	struct list{
		int value;
		struct list *next;
	};
	
	struct list m1, m2, m3;
	struct list *take = &m1;
	
	m1.value = 1;
	m2.value = 2;
	m3.value = 3;
	
	m1.next = &m2;
	m2.next = &m3;
	m3.next = (struct list *)0;
	
	while(take != (struct list *)0){
		printf("%i", (*take).value);
		take = (*take).next;
	}
	
	return 0;
}
