#include <stdio.h>
void fun(int *ar, int n)
{
    int arn[5] = {1,2,3,4,5};

    for (int i = 0; i < n; i++)
    {
        ar[i] = arn[i];
    }
    
}
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    fun(ar, 5);
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    
    return 0;
}
