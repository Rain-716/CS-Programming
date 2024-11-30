#include <iostream>
using namespace std;
int binarySearch(int a[],int n,int x)
{
	int res=-1;
	int low=0;
	int high=n-1;
	while (low<=high){
		int key=(low+high)/2;
		if (a[key]==x){
			res=key;
			break;}
		else if (a[key]>x){
			low=key+1;}
		else {
			high=key-1;}}
	return res;
}
#define N 100000
int a[N];
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    int q,x;
    cin>>q;
    for (int i=0;i<q;i++){
        cin>>x;
        cout<<binarySearch(a,n,x)<<endl;}
    return 0;
}
