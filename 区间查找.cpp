/*给定n(1≤n<2^16)个元素组成的数组A(满足A0≤...≤An?1),
以及一个需要查找的值T,找出T在A中所有出现位置的序号区间
（查找结果放置在一个变量的前半字（区间下限）和后半字（区间上限））。
若T没有在A中出现，查找结果表示为-1（即 0xFFFFFFFF）。
输入格式
第1行：一个整数n(1≤n<2^16) 。
第2行：按升序排列的n个整数，整数之间有一个空格
第3行：一个整数T
输出格式
十六进制(a?f用大写字母)表示的序号区间*/
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
