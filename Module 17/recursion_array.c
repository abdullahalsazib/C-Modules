#include <stdio.h>

void fun(int ar[], int n, int i)
{
    if (i == n)
        return;
    printf("[%d] ", ar[i]);
    fun(ar, n, i + 1);
}

int main()
{
    int n;
    printf("Array size : ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter Your Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    // int n = sizeof(ar) / sizeof(int);//size of our Array:)

    fun(ar, n, 0);

    return 0;
}
