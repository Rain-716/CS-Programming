#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp1(const int a1,const int a2)
{
	return a1<a2;
}
bool cmp2(const int a1,const int a2)
{
	return a1>a2;
}
int main()
{
	char c;
	int i=0,t;
	cin>>c;
	vector<int> a;
	while (cin>>t){
		a.push_back(t);
	}
	if (c=='A'){
		sort(a.begin(),a.end(),cmp1);
	}
	else {
		sort(a.begin(),a.end(),cmp2);
	}
	for (i=0;i<a.size()-1;i++){
		if (a[i]==a[i+1]){
			a.erase(a.begin()+i);
			i--;
		}
	}
	for (i=0;i<a.size()-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[i]<<endl;
	return 0;
}
