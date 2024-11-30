#include <iostream>
using namespace std;
#define N 9
long long lcm(long long int a,long long int b)
{
	long long int max= a>b ? a : b;
	long long int min= a>b ? b : a;
	while (min){
		long long int t=min;
		min=max%min;
		max=t;
	}
	return a*b/max;
}
long long LCM(int a[],int n)
{
	if (n==1) return a[0];
	long long int res=lcm(a[0],a[1]);
	if (n==2) return res;
	if (n>=3) for (int i=2;i<n;i++){
		res=lcm(res,a[i]);
	}
	return res;
}
int main()
{
   int i,n,a[N];
   for (cin>>n,i=0;i<n;i++) cin>>a[i];
   cout<<LCM(a,n)<<endl;
   return 0;
}

