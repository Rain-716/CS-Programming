/*����һ��int������x����x�Ķ����Ʊ�ʾ�е�iλ�͵�jλ��ֵ������0��i,j��31��
ע�⣺x�Ķ����Ʊ�ʾ�����ұ�Ϊ��0λ��*/ 
/*�� x=100110
  mask=010000
answer=110100
     	i  j */
#include <iostream>
using namespace std;
int main()
{
	int x,i,j,ir,jr,im,jm;
	cin>>x>>i>>j;
	ir=(x>>i)&1;
	jr=(x>>j)&1;
	im=1<<i;
	jm=1<<j;
	if (ir!=jr) {
	x=x^im^jm;}
	cout<<x<<endl;
	return 0;
}
