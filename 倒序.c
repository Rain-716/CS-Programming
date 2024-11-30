#include <stdio.h>
int main()
{
	int x, y, a, b, c;
	scanf("%d", &x);
	a = x / 100;
	y = x % 100;
	b = y / 10;
	c = y % 10;
	printf("%d", 100 * c + 10 * b + a);
} 
	
