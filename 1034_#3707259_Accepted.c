#include <stdio.h>
int main()
{
    double a, d, b, e, c, x;
    scanf("%lf %lf %lf %lf %lf", &a, &d, &b, &e, &c);
    x=((b-c)*d+(c-a)*e)/(b-a);
    printf("%.3f", x);
}