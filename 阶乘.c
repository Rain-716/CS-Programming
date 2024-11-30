#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int p=n;
	do {p*=n-1;
		n--;
		}while (n>1);
	printf("%d",p);
	return 0;
}
