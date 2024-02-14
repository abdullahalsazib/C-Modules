#include <stdio.h>

int main(){
    int row, colume;
    scanf("%d %d", &row, &colume);
    int a[row][colume];

    for (int i = 0; i < row; i++)
    {
       for(int j = 0; j < colume; j++)
       {
        scanf("%d", &a[i][j]);
       }
    }
    // exact row;
    // int e;
    // scanf("%d", &e);
    // if(e <= row){
    //  for (int i = 0; i < colume; i++)
    //  {
    //    printf("%d ", a[e][i]);
    //  }
    // }
    // else
    // {
    //     printf("Error");
    // }
    
    //exact colume;
    int e;
    scanf("%d", &e);
    if(e <= colume){
     for (int i = 0; i < row; i++)
     {
       printf("%d ", a[i][e]);
     }
    }
    else
    {
        printf("Not valied number!");
    }



    return 0;
}
