#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,count=0;
	long long int n;
	cin>>n>>m;
	if (n==0&&m==1){
		cout<<"1 0"<<endl;}
	else {
		long long int nc=n;
		while (nc>0){
			nc/=10;
			count++;}
		cout<<count<<" ";
		m%=count;
		for (int i=1;i<=m;i++){
			long long int nr=(n%10)*(long long int)pow(10,count-1)+(n/10);
			n=nr;}
		cout<<n<<endl;}
	return 0;
}
