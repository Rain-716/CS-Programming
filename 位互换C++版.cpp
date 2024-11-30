/*给定一个int型整数x，将x的二进制表示中第i位和第j位的值互换。0≤i,j≤31。
注意：x的二进制表示的最右边为第0位。*/ 
/*例 x=100110
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
