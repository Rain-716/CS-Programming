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
	printf("���1��100�в���:\n");
	do {n++;
	    scanf("%d",&b);
		if (a>b){
		printf("��С��!\n");}
		else if (a<b){
		printf("�´���!\n");}
	}while(a!=b);
	printf("������!\n������%d��",n);
	return 0;
}
