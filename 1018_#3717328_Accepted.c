#include <stdio.h>
#include <math.h>
int main()
{
	int a,t;
	long int s;
	scanf("%d",&a);
	if (a%3==0){
		t=a/3;
		s=pow(3,t);}
	else if (a%3==1){
		t=(a-4)/3;
		s=pow(3,t)*4;}
	else {t=(a-2)/3;
		s=pow(3,t)*2;}
	printf("%ld",s);
	return 0;	
}