#include <stdio.h>


int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}

int main(){
    
    int x = sum();
    printf("%d", x);
    return 0;
}
