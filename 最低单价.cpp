#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int arraymin(const vector<long double>&a,int n)
{
	int i,min=0;
	for (i=0;i<n;i++) {
		if (a[i]<a[min]) {
		   min=i;}}
  	return min;
}
int main()
{
    int n,i;
    cin>>n;
    vector <int> a(n);
    vector <int> b(n);
    vector <long double> c(n);
    for (i=0;i<n;i++) {
		cin>>a[i];
		cin>>b[i];
		c[i]=(long double)a[i]/b[i];}
	int min=arraymin(c,n);
	cout<<min+1<<endl<<fixed<<setprecision(15)<<c[min]<<endl;
	return 0;
}
