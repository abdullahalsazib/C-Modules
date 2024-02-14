#include <stdio.h>


int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a%b == 0 || b%a == 0)
    {
        printf("Multipels");
    }
    else
    {
        printf("NO Multiples");
    }

    return 0;
}
