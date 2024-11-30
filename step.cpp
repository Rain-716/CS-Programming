#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int T,n;
	cin>>T;
	vector<long long int> t(50);
	t[0]=1;t[1]=2;t[2]=4;t[3]=8;
	for(int i=4;i<50;i++){
		t[i]=t[i-1]+t[i-2]+t[i-3]+t[i-4];
	}
	for (int i=0;i<T;i++){
		cin>>n;
		cout<<"case #"<<i<<":"<<endl;
		cout<<t[n-1]<<endl;
	}
	return 0;
}
