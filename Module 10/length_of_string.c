#include <stdio.h>
#include <string.h>

int main(){
    char a[9] = "abdullah";
    int count = 0;
    // for-loop
    for(int i = 0;  a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);

    //while-loop
    int whileCount = 0;
    int j = 0;
    while (a[j] != '\0')
    {
        whileCount++;
        j++;
    }
    
    printf("%d\n", whileCount);

    //strLenght funcation;

    int strl = strlen(a);
    printf("%d", strl);

    
    return 0;
}
