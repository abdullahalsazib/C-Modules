#include <stdio.h>
void fun(int x)
{
    printf("%d\n", x);
    int *fun = &x;
    printf("%p", fun);
}
int main(){
    int x;
    x = 10;
    int *maine = &x;
    printf("%p\n", maine);
    fun(x);

    return 0;
}
