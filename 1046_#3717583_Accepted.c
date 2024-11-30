#include <stdio.h>
int main()
{
	double e=0.0;
	int n;
	for (n=0;n<=10;n++){
		double b;
		int p=1;
		int a;
		for (a=1;a<=n;a++){
			p*=(double)a;}
		b=1.0/p;
		e+=b;}
	printf("%lf",e);
	return 0;
}