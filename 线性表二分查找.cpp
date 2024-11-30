#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,v,i;
	cin>>n;
	vector<int> a(n);
	for (i=0;i<n;i++){
		cin>>a[i];}
	cin>>v;
	int res=-1;
	int low=0;
	int high=n-1;
	while (low<=high){
		int key=(low+high)/2;
		if (a[key]==v){
			res=key;
			break;}
		else if (a[key]<v){
			low=key+1;}
		else {
			high=key-1;}}
	cout<<res<<endl;
	return 0;
}
