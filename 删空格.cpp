#include <iostream>
#include <cstring>
using namespace std;
void del(char s[])
{
	int i,j,length;
	length=strlen(s);
	for(i=0;i<length;){
		if (s[i]==' '){
			length--;
			for(j=i;j<length;j++){
				s[j]=s[j+1];}}
		else i++;}
	s[length]='\0';
}
int main()
{
    char s[110000];
    gets(s);  
    del(s);
    cout<<s<<endl;
    return 0;
}
