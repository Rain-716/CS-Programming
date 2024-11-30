#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i,n;
	long long int sum=0;
	cin>>n;
	vector <long long> a(n);
	vector <long long> b(n);
	for (i=0;i<n;i++){
		cin>>a[i];}
	for (i=0;i<n;i++){
		cin>>b[i];}
	for (i=0;i<n;i++){
		sum+=(a[i]*b[i]);}
	cout<<sum<<endl;
	return 0;
}
