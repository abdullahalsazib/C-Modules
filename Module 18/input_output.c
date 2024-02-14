#include <stdio.h>
int main()
{
    // declare 2d array
    int a[5][3];
    for (int i = 0; i < 5; i++)
    { // Row
        for (int j = 0; j < 3; j++)
        { // colume
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    { // Row
        for (int j = 0; j < 3; j++)
        { // colume
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
