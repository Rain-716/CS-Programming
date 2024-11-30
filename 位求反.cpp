#include <stdio.h>
#include <math.h>
int main()
{
	int x,p,n,a,b,b1,c,x1;
	scanf("%d %d %d",&x,&p,&n);
	const int e=pow(2,p-n+1);
	const int d=pow(2,p+1);
	c=x%e;
	b=(x-c)%d;
	a=x-b-c;
	b1=(pow(2,n)-1)*e-b;
	x1=a+b1+c;
	printf("%d",x1);
	return 0;
}
