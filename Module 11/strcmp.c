#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

   int v =  strcmp(a, b);
   //3 value retrun;
   //b is small = 1;
   //a is small = -1;
   //same = 0;
   printf("%d", v);
    return 0;
}
