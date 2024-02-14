#include <stdio.h>

int main(){
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    if(row != col)
    {
        flag = 0;
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(i + j == row -1)
            {
                if(a[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
                //continue ba else if()
            if(a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if(flag == 1)
    {
        printf("unit secondry Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }
    return 0;
}
