#include <stdio.h>
int main()
{
	int x;
	int one,five,ten,twenty,fifty,hundred;
	scanf("%d",&x);
	for (one=0;one<=x;one++){
		for (five=0;five<=x/5;five++){
			for (ten=0;ten<=x/10;ten++){
				for (twenty=0;twenty<=x/20;twenty++){
					for (fifty=0;fifty<=x/50;fifty++){
						for (hundred=0;hundred<=x;hundred++){
							if (one+five*5+ten*10+twenty*20+fifty*50+hundred*100==x){
							printf("一元*%d 五元*%d 十元*%d 二十元*%d 五十元*%d 一百元*%d\n",one,five,ten,twenty,fifty,hundred);}
						}
					}
				}
			}
		}
	}
	return 0;	
}
