#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,c=0;
    scanf("%d %d",&m,&n);
    for (n=m+1;c<n;c++) {
		for (int i=2;i<=sqrt(n);i++) {
        	if (n%i==0){
			c++;
            if (c==n) {
                printf("%d",n);
                break;}}}}
    return 0;
}
