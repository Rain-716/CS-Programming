#include <stdio.h>
int main()
{
	int y,m;
	scanf("%d %d",&y,&m);
	if (y%4==0&&y%100!=0&&m==2||y%400==0&&m==2) 
		printf("29");
	else
	    switch (m) {
	    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		    printf("31");
		    break;
	    case 4:case 6:case 9:case 11:
		    printf("30");
		    break;
	    case 2:
		    printf("28");
		    break;		
	    }
	return 0;
}
