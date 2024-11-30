#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int hig(long long int x)
{
	if (x<0){
		x=-x;
	}
	while(x/10){
		x/=10;
	}
	return x;
}
bool cmp(const long long int a1,const long long int a2)
{
	if (hig(a1)!=hig(a2)){
		return hig(a1)>hig(a2);
	}
	return a1<a2;
}
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++){
		int N,j;
		cin>>N;
		vector<long long int> a(N);
		for (j=0;j<N;j++){
			cin>>a[j];
		}
		sort(a.begin(),a.end(),cmp);
		cout<<"case #"<<i<<":"<<endl;
		for (j=0;j<N-1;j++){
			cout<<a[j]<<" ";
		}
		cout<<a[j]<<endl;
	}
	return 0;
}
