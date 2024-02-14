#include <stdio.h>

int main(){
    double x = 5.26;
    double *ptr = &x;

    printf("%0.2lf %0.2lf", x, *ptr);

    return 0;
}
