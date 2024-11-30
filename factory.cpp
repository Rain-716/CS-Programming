#include <iostream>
#include <vector>
using namespace std;
int factory(int m,int k,vector<int>& a)
{
	int i,sum=0;
	for (i=0;i<k;i++){
		sum+=a[i];}
	return sum;
}
int main()
{
	int T,i,j;
	cin>>T;
	for (i=1;i<=T;i++){
		int m,k;
		cin>>m>>k;
		vector<int> a(m);
		for (j=0;j<m;j++){
			cin>>a[j];}
		int res=factory(m,k,a);
		cout<<res<<endl;}
	return 0;
}
