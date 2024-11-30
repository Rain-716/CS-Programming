#include <stdio.h>
int main()
{
	char n;
	int a,b;
	scanf("%c %d %d",&n,&a,&b);
	if(n=='/'&&b==0)
		printf("Divided by zero!");
	else
		switch(n)
		{
		case '+':
		printf("%d",a+b);
		break;
		case '-':
		printf("%d",a-b);
		break;
		case '*':
		printf("%d",a*b);
		break;
		case '/':
		printf("%d",a/b);
		break;
		}
	return 0;
} 