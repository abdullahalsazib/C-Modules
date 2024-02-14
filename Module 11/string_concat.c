#include <stdio.h>
#include <string.h>

int main(){
    char a[200], b[100];
    scanf("%s %s", a, b);
    int a_next = strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[a_next] = b[i];
        a_next++;
    }
    printf("%s", a);
    

    return 0;
}
