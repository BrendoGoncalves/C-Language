#include <stdio.h>

int main(void){
    
    int x[2] = {8, 4};
    int *p = x;
    int i;
    
    for(i = 0; i < 2; ++i){
        printf("%i ", *(x + i));
    }
    
    printf("%i", *p);
}
