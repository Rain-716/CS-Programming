#include <stdio.h>
int main()
{
	int amount=0;
	int price=0;
	
	printf("������������Ԫ����\n");
	scanf("%d", &amount);
	
	printf("�������Ԫ����\n");
	scanf("%d", &price);
	
	int change=amount-price;
	printf("����%dԪ\n", change); 
	
	return 0; 
} 
