#include <stdio.h>
int main()
{
	int b, p;
	scanf("%d %d", &b, &p);
	if ( b > p ) 
		printf("����%dԪ", b - p); 
	else 
	    printf("����Ǯ����");
	return 0;
}
