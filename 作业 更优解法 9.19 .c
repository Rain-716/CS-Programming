#include <stdio.h>
#include <math.h>
int main()
{
	int a=2;
	int n=4;
	int t=0;
	while (t<log2(n)){
		a*=a;
		t ++;
	}
	printf("%d",a);
	return 0;
}
