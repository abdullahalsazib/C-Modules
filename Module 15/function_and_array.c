#include <stdio.h>

void fun(int *ar, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(ar + i));
    }

}
int main(){
    int arr[] = {10,20,30,40,50};
    int asz = sizeof(arr) / sizeof(int);
    fun(arr, asz);

    return 0;
}
