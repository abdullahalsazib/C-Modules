#include <stdio.h>


int main(){
    int n = 5,s, k;
    s = n - 1;
    k = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
        
    }
    

    return 0;
}
