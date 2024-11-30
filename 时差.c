#include <stdio.h>
int main()
{
	int a, b, c;
	int hr1, min1;
	int hr2, min2;
	scanf("%d %d", &hr1, &min1);
	scanf("%d %d", &hr2, &min2);
	a = (hr2 - hr1) * 60 + min2 - min1; 
	b = a % 60;
	c = (a - b) / 60;
	printf("%d–° ±%d∑÷÷”", c, b);
 } 
