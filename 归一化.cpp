#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int arraymax(const vector<int>&a,int n)		
{
	int i,max=a[0];
	for (i=0;i<n;i++) {
		if (a[i]>max) {
		   max=a[i];}}
  	return max;	   
}
int arraymin(const vector<int>&a,int n)		
{
	int i,min=a[0];
	for (i=0;i<n;i++) {
		if (a[i]<min) {
		   min=a[i];}}
  	return min;	   
}
int main()
{
	int n,i;
	cin>>n;
	vector<int> a(n);
	vector<double> b(n);
	for (i=0;i<n;i++){
		cin>>a[i];}
	double max=arraymax(a,n);
	double min=arraymin(a,n);
	for (i=0;i<n;i++){
		b[i]=(a[i]-min)/(max-min);}
	for (i=0;i<n;i++){
		cout<<fixed<<setprecision(10)<<b[i]<<" ";}
	return 0;
}
 
