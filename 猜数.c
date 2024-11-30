#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int b;
	int n=0;
	//printf("%d\n",a);
	printf("请从1到100中猜数:\n");
	do {n++;
	    scanf("%d",&b);
		if (a>b){
		printf("猜小了!\n");}
		else if (a<b){
		printf("猜大了!\n");}
	}while(a!=b);
	printf("猜中了!\n共用了%d次",n);
	return 0;
}
