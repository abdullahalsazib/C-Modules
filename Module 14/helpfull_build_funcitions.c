#include <stdio.h>
#include <math.h>
#include <stdlib.h>//abs();
void abss(void)
{
    int w;
    scanf("%d", &w);
    int an = abs(w);
    printf("%d\n", an);
}
int main(){
    double x;
    printf("double:\n");
    scanf("%lf", &x);
    int ans = ceil(x);
    int ans2 = floor(x);
    int ans3 = round(x);
    int s;//double pos
    printf("Sqrt:\n");
    scanf("%d", &s);
    int ans4 = sqrt(s);
    int p, q;//double pos
    printf("pow 0^0\n");
    scanf("%d %d", &p, &q);
    int ans5 = pow(p, q);


    printf("Ceil : %d\n", ans);
    printf("Floor : %d\n", ans2);
    printf("Round : %d\n", ans3);
    printf("Sqrt : %d\n", ans4);
    printf("Pow : %d\n", ans5);
    printf("Abs :");
    abss();
    return 0;
}
