#include <stdio.h>
int main()
{
    int d, p, r;
    int a;
    double b, m;
    scanf("%d %d %d",&d,&p,&r);
    a=p/(p-d*r/100);
    b=1+(double)r/100;
    m=log(a)/log(b);
	printf("%.0f",m);
    return 0;
}
