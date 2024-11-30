#include <iostream>
using namespace std;
bool strncmp(string a,string b,int n)
{
	for (int i=0;i<n;i++){
		if (a[i]!=b[i]){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	string a,b;
	cin>>a>>b>>n;
	cout<<strncmp(a,b,n)<<endl;
	return 0;
}
