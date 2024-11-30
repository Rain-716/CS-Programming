#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
	int a;
	do{srand(time(0));
		a=rand()%100;
		printf("%d",a);
	}while(a>0);
	return 0;
}
