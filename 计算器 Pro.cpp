/*0B,0b��ͷ��ʾ��һ����������,0X,0x��ͷ��ʾ��һ��ʮ����������
0��ͷ������ֱ�ʾ�˽��ƣ����������ʾ��һ��ʮ��������*/
#include <iostream>
#include <cstdlib>
using namespace std;
long int convertDecimal(string a)
{
	long int res;
	if (a[0]=='0'&&(a[1]=='B'||a[1]=='b')){
		res=strtol(a.c_str()+2,0,2);}
	else if (a[0]=='0'&&(a[1]=='X'||a[1]=='x')){
		res=strtol(a.c_str()+2,0,16);}
	else if (a[0]=='0'){
		res=strtol(a.c_str()+1,0,8);}
 	else {
		res=strtol(a.c_str(),0,10);}
 	return res;
}
int main()
{
	char ope;
	string as,bs;
	cin>>ope>>as>>bs;
	int a=convertDecimal(as);
	int b=convertDecimal(bs);
	if(ope=='/'&&b==0)
		cout<<"Divided by zero!"<<endl;
	else
		switch(ope)
		{
			case '+':
			cout<<a+b<<endl;
			break;
			case '-':
			cout<<a-b<<endl;
			break;
			case '*':
			cout<<a*b<<endl;
			break;
			case '/':
			cout<<a/b<<endl;
			break;
		}
	return 0;
} 
