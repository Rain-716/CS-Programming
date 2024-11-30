#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	if (fabs(b)<=1e-8)
		cout<<"divisor near zero"<<endl;
	else
		cout<<fixed<<setprecision(10)<<a/b<<endl; 
	return 0;
} 
