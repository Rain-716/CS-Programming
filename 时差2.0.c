#include <stdio.h>
int main()
{
	int a, b, c;
	int hr1, min1;
	int hr2, min2;
	scanf("%d %d", &hr1, &min1);
	scanf("%d %d", &hr2, &min2);
	b = hr2 - hr1;
	c = min2 - min1;
	if ( c <0 ){
		b -= 1;
		c += 60;
	}
	printf("%dĞ¡Ê±%d·ÖÖÓ", b, c);
 } 
