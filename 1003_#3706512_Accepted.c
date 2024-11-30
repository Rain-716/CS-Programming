#include <stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	printf("fahrenheit=%f, celsius=%f", a, (a - 32.0) * 5 / 9);
	return 0;
}