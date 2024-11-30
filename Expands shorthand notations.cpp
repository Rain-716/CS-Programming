#include <iostream>
using namespace std;
int main()
{
	int i=0;
	char c;
	char s[10]={0};
	while (cin.get(c)&&c!='\n'){
		s[i++]=c;
	}
	i=0;
	if (s[i]=='0'){
		cout<<"0oOo0O0"<<endl;
  		return 0;
	}
	while (s[i]=='-'){
		cout<<s[i++];
	}
 	while (s[i]&&s[i+1]&&!(s[i]=='-'&&(s[i+1]=='-'||!s[i+1]))){
  		while (s[i]!='-'){
			cout<<s[i++];
		}
		for (char j=s[i-1]+1;j<=s[i+1];j++){
			cout<<j;
		}
		if (s[i]=='-'&&s[i+1]!='-'&&s[i+1]){
			i+=2;
		}
	}
	while (s[i]=='-'){
		cout<<s[i++];
	}
	return 0;
}
