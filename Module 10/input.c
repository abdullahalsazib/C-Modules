#include <stdio.h>


int main(){
    char a[5]; // "Sazib" = 5;
    // "Sazib\0" == "index = 6";
    // int sz = sizeof(a) / sizeof(char);
    scanf("%s", &a);
    printf("%s\n", a);
    // printf("%d\n", sz);

    return 0;
}
