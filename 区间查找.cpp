/*����n(1��n<2^16)��Ԫ����ɵ�����A(����A0��...��An?1),
�Լ�һ����Ҫ���ҵ�ֵT,�ҳ�T��A�����г���λ�õ��������
�����ҽ��������һ��������ǰ���֣��������ޣ��ͺ���֣��������ޣ�����
��Tû����A�г��֣����ҽ����ʾΪ-1���� 0xFFFFFFFF����
�����ʽ
��1�У�һ������n(1��n<2^16) ��
��2�У����������е�n������������֮����һ���ո�
��3�У�һ������T
�����ʽ
ʮ������(a?f�ô�д��ĸ)��ʾ���������*/
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int searchLow(int n,vector<int> &a,int t)
{
	int i=0;
	while (a[i]!=t&&i<n){
		i++;}
		return i;
}
int searchHigh(int n,vector<int> &a,int t)
{
	int i=n-1;
	while (a[i]!=t&&i>=0){
		i--;}
		return i;
}
int main()
{
	int n,t,i;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++){
		cin>>a[i];}
	cin>>t;
	int low=searchLow(n,a,t);
	int high=searchHigh(n,a,t);
	if (low>high){
		cout<<"FFFFFFFF"<<endl;}
	else {
		int res=(low<<16)|high;
		cout<<hex<<uppercase<<res<<endl;}
	return 0;
}
