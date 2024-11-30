#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	printf("celsius=%f, fahrenheit=%f", a, a * 1.8 + 32);
	return 0;
}