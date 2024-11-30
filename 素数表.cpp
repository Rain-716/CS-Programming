#include <stdio.h>
#include <math.h>
int main()
{
	int a,m,n;
	scanf("%d",&m);
	for (int a=2;a<=m;a++){
		int b=1;
		for (int i=2;i<=sqrt(a);i++){
			if (a%i==0){
				b=0;
				break;}}
		if (b!=0){
			printf("%d ",a);
			n++;}}
	printf("\n%d %lf",n,(float)n/m);
	return 0; 
}
