#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int highDigit(int x)
{
	if (x<0){
		x=-x;
	}
	if (!x){
		return 0;
	}
	while(x/10){
		x/=10;
	}
	return x;
}
bool cmp1(const int x1,const int x2)
{
	if (highDigit(x1)!=highDigit(x2)){
		return highDigit(x1)>highDigit(x2);
	}
	return x1<x2;
}
bool cmp2(const vector<int> &a1,const vector<int> &a2)
{
	if (a1.size()!=a2.size()){
		return a1.size()>a2.size();
	}
	return 0;
}
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	vector< vector<int> > a(n,vector<int>(m));
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			cin>>a[i][j];
  		}
		sort(a[i].begin(),a[i].end(),cmp1);
		a[i].erase(unique(a[i].begin(),a[i].end()),a[i].end());
	}
	stable_sort(a.begin(),a.end(),cmp2);
	for (i=0;i<n;i++){
		cout<<a[i][0]<<' ';
		for (j=1;j<m&&cmp1(a[i][j-1],a[i][j]);j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
