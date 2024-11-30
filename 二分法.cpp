#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main()
{
	double x;
	const double error=1e-6; 
	cin>>x;
	double low=0.0,high=31622.8,mid=(low+high)/2;
	if (x<error){
		cout<<"0.00000000"<<endl;}
	else {
		while (fabs(mid*mid-x)>=error){
		if (x<mid*mid) {
			high=mid;}
		else {
			low=mid;}
		mid=(low+high)/2;}
	cout<<fixed<<setprecision(8)<<mid<<endl;}
	return 0;
} 
