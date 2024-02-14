#include <stdio.h>
#include <string.h>
void fun(char *ar)
{
    // printf("%d\n", strlen(ar));
    for (int i = 0; i < strlen(ar); i++)
    {
        printf("[%c]\n", ar[i]);
    }
    
}
int main(){
    char ar[20]= "HelloWorld";
    fun(ar);
    return 0;
}
