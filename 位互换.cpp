#include <stdio.h>
#include <math.h>
int main()
{	
	int x,i,j,i1,j1;
	scanf("%d %d %d",&x,&i,&j);
	int i2=pow(2,i);
	int j2=pow(2,j);
	if (x<0&&i==31){
		i1=1;}
	else if (x<0&&j==31){
		j1=0;}
	else
		i1=x/i2%2;
		j1=x/j2%2;
	if (i1==j1){
		printf("%d",x);}
	else if (i1==0&&j1==1){
		printf("%d",x-j2+i2);}
	else
		printf("%d",x-i2+j2);
	return 0;
}
