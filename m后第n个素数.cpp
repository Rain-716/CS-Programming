//输入两个整数m和n，输出m之后（不包括m）的第n个素数。
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int i)
{
	int j;
	if (i==1) return 0;
	if (i==2) return 1;
	for (j=2;j<=sqrt(i);j++)
		if (i%j==0) return 0;
	return 1;				
} 
int main() 
{
	int m,n,i,count=0;
	cin>>m>>n;
	for (i=m+1;count<n;i++) { 
		if (isprime(i)) {
			count++;}} 
	cout<<i-1<<endl; 
	return 0;
}
