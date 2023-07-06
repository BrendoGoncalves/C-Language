#include <stdio.h>

int main(void){
    
    float vector[] = {1, 2, 3};
    float *v = vector;
    
    int n = 0;
    
    do{
        printf("%f ", *v);
        ++n, ++v;
    }while(n < 3);
}
