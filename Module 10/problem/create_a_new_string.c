#include <stdio.h>
#include <string.h>

int main(){
    char s[1001], t[1001];
    scanf("%s %s", s, t);
    int countS = strlen(s);
    int countT = strlen(t);
    
    printf("%d %d\n", countS, countT);
    printf("%s %s", s, t);
    

    return 0;
}
