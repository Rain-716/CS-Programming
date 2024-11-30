#include <stdio.h>
int main()
{
	double e=0.0;
	int n;
	for (n=0;n<=10;n++){
		int p=1;
		int a;
		for (a=1;a<=n;a++){
			p*=a;}
		e+=1.0/p;}
	printf("%lf",e);
	return 0;
}