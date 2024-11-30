#include <iostream>
using namespace std;
int main()
{
	unsigned int x,n,r;
	cin>>x>>n;
	n%=32;
	r=(x>>n)|(x<<(32-n));
	cout<<r<<endl;
	return 0;
}
