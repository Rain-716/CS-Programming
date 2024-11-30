#include <iostream>
#include <cmath>
using namespace std;
string graycode(int x,int level)
{
    if(level==1) return x ? "1" : "0";
	return x<pow(2,level-1) ? "0"+graycode(x,level-1) : "1"+graycode(pow(2,level)-1-x,level-1);
}
string graycode(int x)
{
	if (!x) return "0";
	int level=(int)log2(x)+1;
	return graycode(x,level);
}
int main()
{
	int x;
	cin>>x;
	cout<<graycode(x)<<endl;
	return 0;
}
