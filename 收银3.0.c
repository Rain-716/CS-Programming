#include <stdio.h>
int main()
{
	int amount=0;
	int price=0;
	
	printf("请输入总数（元）：\n");
	scanf("%d", &amount);
	
	printf("请输入金额（元）：\n");
	scanf("%d", &price);
	
	int change=amount-price;
	printf("找您%d元\n", change); 
	
	return 0; 
} 
