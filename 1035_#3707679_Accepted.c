#include <stdio.h>
int main()
{
    int d, p;
    double r, a, b, m;
    scanf("%d %d %lf",&d,&p,&r);
    a=p/(p-d*r/100);
    b=1+r/100;
    m=log(a)/log(b);
	printf("%.0f",m);
    return 0;
}