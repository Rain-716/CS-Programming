#include <iostream>
using namespace std;
int tran(int n)
{
	int m=0;
	while (n){
		m=m*10+n%10;
		n/=10;
	}
	return m;
}
bool isPal(int n)
{
	return n==tran(n);
}
int main()
{
	int n,i=0;
	cin>>n;
	while (!isPal(n)){
		n+=tran(n);
		i++;
	}
	cout<<i<<" "<<n<<endl;
	return 0;
}
