#include <iostream>
#include <cstdlib>
using namespace std;
#define N 8
unsigned h2i(char s[])
{
	unsigned num=(unsigned)strtol(s,0,16);
	return num;
}
int main()
{
	char s[N+1];
	cin>>s;
	cout<<h2i(s);
	return 0;
}
