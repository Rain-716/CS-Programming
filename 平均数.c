#include <stdio.h>
int main()
{
	int a=0; 
	int s=0;
	int n=0;
	scanf("%d",&a); 
	while (a!=-1){
	n++;
	s+=a;
	scanf("%d",&a);
	}
	printf("%lf",(double)s/n);
	return 0;
 } 
