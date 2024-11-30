#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int c;
	int count=0;
	cin>>c;
	while (c){
		if (c&1){
			count++;}
		c>>=1;}
	count=32-count;
	double a=count/32.0*100.0;
	cout<<count<<" "<<fixed<<setprecision(2)<<a<<"%"<<endl;
	return 0;
}
