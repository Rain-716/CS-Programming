#include <iostream>
#include <vector>
using namespace std;
vector<char> convert(int a)
{
	char b;
	vector<char> c;
	if (a==0){
		c.push_back('0');}
 	else {
	 	while(a>0){
  		switch(a%4)
		{
			case 0: b='0'; break;
			case 1: b='1'; break;
			case 2: b='4'; break;
			case 3: b='9'; break;
		}
		c.insert(c.begin(),b);
		a/=4;}}
	return c;
}
int main()
{
	int a,i;
	while(cin>>a){
		vector<char> c=convert(a);
		int length=c.size();
		for(i=0;i<length;i++){
			cout<<c[i];}
			cout<<endl;}
	return 0;
}
