//输入一个整数x，输出将x中从第p位开始右边的n个（二进制）位求反
/*p=9,n=5
x     =00000000000000000111101010000011
	   00000000000000000000001111100000
result=00000000000000000111100101100011*/
#include <iostream> 
using namespace std;
int main()
{
	unsigned int x,p,n,t;
	cin>>x>>p>>n;
	t=~(~0<<n);
	t<<=(p-n+1);
	x^=t;
	cout<<x<<endl;
	return 0;
}
