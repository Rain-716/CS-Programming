#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d ",a);
	while (a!=1){
		if (a%2==1){
			a=a*3+1;}
		else a/=2;
	printf("%d ",a);}
	return 0;
}