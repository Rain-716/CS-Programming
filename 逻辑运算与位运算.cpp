/*������������(int ����)a��b,��1����������������߼����ֵ;��2���������������λ���ֵ.
���b��[0,31]��Χ��,���ڵ�3�к͵�4���зֱ����a��������bλ��ֵ��a�߼�����bλ��ֵ��*/
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
