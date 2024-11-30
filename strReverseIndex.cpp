#include <iostream>
#include <cstring>
using namespace std;
int strReverseIndex(char s[],char t[])
{
	int sl=strlen(s);
	int tl=strlen(t);
	for (int i=sl-1;i>=0;i--){
		int j=tl-1;
		while (j>=0){
            if (s[i--]!=t[j--]){
            	break;
			}
		}
		i++;j++;
		if (!j){
			return i;
		}
	}
	return -1;
}
#define N 80
int main()
{
	char s[N+1],t[N+1];
	scanf("%s%s",s,t);
	cout<<strReverseIndex(s,t)<<endl;
	return 0;
}
