#include <stdio.h>


int main(){
    
    char a;
    //A = 65
    //Z = 90
    //a = 97
    //z = 122

    scanf("%c", &a);

    if(a == 'a' || a){
        printf("%c", a + 1);
    }
    else
    {
        printf("0");
    }

    return 0;
}
