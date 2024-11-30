#include <iostream>
#include <vector>
using namespace std;
bool palindrome(unsigned int a,int length)
{
	int i;
	unsigned int b=0,aOri=a;
	for (i=0;i<length;i++){
		b<<=1;
		if (a&1){
			b+=1;}
		a>>=1;}
	return aOri==b;
}
int main()
{
	int T,i;
	cin>>T;
	vector<unsigned int> a(T);
	for (i=0;i<T;i++){
		cin>>a[i];}
	for (i=0;i<T;i++){
		int level=0,length=32;
		while (length>=2){
		if (palindrome(a[i],length)){
			level++;
   			a[i]>>=(length/2);
			length/=2;}
		else break;}
		cout<<level<<endl;}
	return 0;
}
