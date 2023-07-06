#include <stdio.h>

struct list{
	int value;
	struct list *next;
};

struct list *search(struct list *pList, int value){
	
	while(pList != (struct list *)0){
		
		if(pList->value == value){
		   return (pList);
		}else{
		   pList = pList->next;
		}
	}
	return (struct list *)0;
}

int main(void){
	
	struct list *search(struct list *pList, int value);
	struct list m1, m2, m3;
	struct list *result, *take = &m1;
	int value;
	
	m1.value = 5;
	m2.value = 10;
	m3.value = 15;
	
	m1.next = &m2;
	m2.next = &m3;
	m3.next = 0;
	
	printf("Type the number for research : ");
	scanf("%i", &value);
	
	result = search(take, value);
	
	if(result == (struct list *)0){
		printf("Value not found. \n");
	}else{
		printf("Value %i found. \n", result->value);
	}
	return 0;
}
