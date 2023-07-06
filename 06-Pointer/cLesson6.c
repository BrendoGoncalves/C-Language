#include <stdio.h>

int main(void){
    
    int x = 6;
    const int *const p = &x;
    //int y = 7;
    
    //p = &x;
    
    //*p = 8;
    //p = &y;
    
    printf("%i ", *p);
    
    return 0;
}
