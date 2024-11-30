#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string s;
	while (cin>>n) {
		getline(cin,s);
		int k=s.size()-1;
		int fac=1;
		for (int i=n;i>0;i-=k){
			fac*=i;}
		cout<<fac<<endl;}
	return 0;
}
