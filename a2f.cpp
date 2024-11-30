#include <iostream>
#include <cmath>
using namespace std;
double a2f(char s[])
{
	int i=0,sign=1,signe=1,power;
	int inp=0,dep=0,exp=0;
	if (s[i]=='-'){
		sign=-1;
		i++;
 	}
	while (s[i]>='0'&&s[i]<='9'){
		inp=10*inp+s[i++]-'0';
	}
	i++;
	for (power=0;s[i]>='0'&&s[i]<='9';power++){
		dep=10*dep+s[i++]-'0';
	}
	i++;
	if (s[i]=='+'){
		i++;
	}
	else if (s[i]=='-'){
		signe=-1;
		i++;
	}
 	while (s[i]>='0'&&s[i]<='9'){
		exp=10*exp+s[i++]-'0';
	}
	double res=sign*(inp+dep/pow(10,power))*pow(10,signe*exp);
	return res;
}
#define MAXLINE 80
int main()
{
	char s[MAXLINE];
    cin>>s;
    cout<<a2f(s)<<endl;
}
