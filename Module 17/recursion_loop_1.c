#include <stdio.h>
void fun(int i)
{
    if (i == 0) return;
    printf("%d\n", i);
    fun(i - 1);
}
int main(){
    int x;
    x = 10;
    int *ptr = &x;
    fun(*ptr);
    
    return 0;
}
