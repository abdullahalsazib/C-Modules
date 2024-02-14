#include <stdio.h>
#include <string.h>

int main(){
    
    char a[18];
    // gets(a); //worrng;
    fgets(a, 12, stdin); // input => "abdullah al sazib";
    //spacd and enter is a cracter;
    
    printf("%s", a); // output => "abdullah al";

    return 0;
}
