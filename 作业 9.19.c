#include <stdio.h>
int main()
{
	int a,n;
	int p=1;
	int t=0;
	printf("����a��n:\n"); 
	scanf("%d %d",&a,&n);
	while (t<n){ 
		p*=a;
		t ++;} 
	printf("%d",p);
	return 0;
}
