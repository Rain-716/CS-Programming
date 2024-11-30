#include <iostream>
#include <cstring>
using namespace std;
int strend(const char *s,const char *t)
{
	int lens=strlen(s);
	int lent=strlen(t);
	int beg=lens-lent;
	for (int i=0;*(t+i);i++){
		if (*(s+beg+i)!=*(t+i)){
			return 0;
		}
	}
	return 1;
}
int main()
{
	char s[21],t[21];
	cin.getline(s,21);
	cin.getline(t,21);
	cout<<strend(s,t)<<endl;
	return 0;
}
