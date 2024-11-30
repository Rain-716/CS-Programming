#include <iostream>
using namespace std;
int main()
{
	char c;
	int count=0;
	cin>>c;
	while (c){
		if (c&1){
			count++;}
		c>>=1;}
	cout<<count<<endl;
	return 0;
} 
