#include <stdio.h>


int main(){
    int n;
    int a[n];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }
   for (int i = 0; i < n; i++)
   {
        printf("[%d]\n", a[i]);
   }
   
    

    return 0;
}
