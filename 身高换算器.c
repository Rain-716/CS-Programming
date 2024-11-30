#include <stdio.h>
int main() 
{
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b); 
	printf("%f", (a + b / 12.0) * 0.3048);
	
	return 0;
}
