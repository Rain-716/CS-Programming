#include <iostream>
using namespace std;
int main()
{
	int a,i;
	int b=0;
	cin>>a;
	while (a>0){
		b<<=1;
		if (a&1){
			b+=1;}
		a>>=1;}
	cout<<b<<endl;
	return 0;
}
