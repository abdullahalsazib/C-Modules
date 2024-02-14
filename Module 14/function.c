#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            printf("%d\n ", sum(a[i], a[j]));
        }
    }
    

    return 0;
}
