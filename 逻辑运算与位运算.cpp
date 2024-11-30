/*输入两个整数(int 类型)a和b,第1行输出这两个数的逻辑与的值;第2行输出这两个数的位与的值.
如果b在[0,31]范围中,则在第3行和第4行中分别输出a算术右移b位的值和a逻辑右移b位的值。*/
#include <iostream>
using namespace std;
int main()
{
	int a,b,d,e,f;
	bool c;
	cin>>a>>b;
	c=a&&b;
	d=a&b;
	cout<<c<<endl;
	cout<<d<<endl;
	if (b>=0&&b<=31){
		e=a>>b;
		f=(unsigned int)a>>b;
		cout<<e<<endl;
		cout<<f<<endl;}
	return 0;
}
