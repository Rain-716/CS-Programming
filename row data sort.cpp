#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(vector<int> &a1,vector<int> &a2)
{
	int len= a1.size()<a2.size() ? a1.size() : a2.size();
	for (int i=0;i<len;i++){
		if (a1[i]!=a2[i]){
			return a1[i]>a2[i];
		}
	}
}
int main()
{
	int T;
	cin>>T;
	for (int i=0;i<T;i++){
		int N;
		cin>>N;
		vector< vector<int> > a(N);
		for (int j=0;j<N;j++){
	   		int t;
			while (cin>>t){
				a[j].push_back(t);
				if (t==-1){
					break;
				}
			}
		}
		sort(a.begin(),a.end(),cmp);
		for (int j=0;j<N;j++){
			for (int k=0;a[j][k]!=-1;k++){
				cout<<a[j][k]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
