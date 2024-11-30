#include <iostream>
using namespace std;
int len=0;
void itob(int n,char s[100],int b)
{
	if (n<0){
		s[len++]='-';
		n=-n;
	}
	if (n/b){
		itob(n/b,s,b);
	}
	s[len++]= (n%b)<=9 ? (n%b)+'0' : (n%b-10)+'A';
}
int main()
{
    int n,b;
    char s[100];
    cin>>n>>b;
    itob(n,s,b);
    s[len]='\0';
    cout<<s<<endl;
    return 0;
}
