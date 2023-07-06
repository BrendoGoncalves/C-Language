#include <stdio.h>

int main(void){

    int i, vector[3] = {1, 2, 3};
    int *p = vector;
    
    for(i = 0; i < 3; ++i){
        printf("%i", p[i]);
    }
    
}
