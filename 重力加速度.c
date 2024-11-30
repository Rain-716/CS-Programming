#include <stdio.h>
#include <math.h>
int main()
{
	int n; 
	const int a=5;
	const int b=3;
	double s,h,t;
	h=1.75;
	scanf("%d",&n);
	if(n<=3)
		s=(n-1)*a+h;
	else
		s=2*a+(n-3)*b+h;
	t=sqrt(s/4.9);
	printf("%.3f",t);
	return 0;
} 
