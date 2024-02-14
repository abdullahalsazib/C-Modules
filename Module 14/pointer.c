#include <stdio.h>

int main(){
    //pointer

    int a;
    a = 10;

    //memory add
    // printf("%p", &a);
    int *p = &a;
    printf("%p\n", p);
    *p = 20;
    printf("%d", *p);

    
    return 0;
}
