#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d;
	double x1,x2,x;
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){ 
		x1=(-b-sqrt(d))/(2*a);
		x2=(-b+sqrt(d))/(2*a);
		printf("%lf %lf",x1,x2);} 
	else if(d==0){ 
		x=-b/(2*a);
		printf("%lf",x);} 
	else
		printf("No Answer");
	return 0;
}