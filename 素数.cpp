#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int b=1;
	scanf("%d",&a);
	if (a==1){
	    b=0;} 
	else
	    for (int i=2;i<=sqrt(a);i++){
    		if (a%i==0){
    			b=0;
    			break;}}
    	if (b==0){
    	printf("No");}
    	else
    	printf("Yes");
	return 0; 
} 
