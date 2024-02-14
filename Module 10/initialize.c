#include <stdio.h>

int main()
{
    // int ar[5] = {10, 20, 30, 40, 50};
    // it's for intiger value;

    // char ar[5] = {'S', 'a', 'z', 'i', 'b'};
    //it's for charecter value;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", ar[i]);
    // }

    char ar[6] = "Sazib"; //it's  string;
    //ar[5] = "Sazib"; but end of "\0" NULL;
    //"Sazib" end of index "\0" this is "\0" for NULL;
    printf("%s", ar);

    return 0;
}
