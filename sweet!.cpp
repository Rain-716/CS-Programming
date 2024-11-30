#include <iostream>
#include <vector>
using namespace std;
int sweet(int num)
{
	int sum=num;
	while(num>=3){
		int got=num/3;
		int remain=num%3;
		sum+=got;
		num=got+remain;}
	return sum;
}
int main()
{
	int T,i;
	cin>>T;
	vector<int> t(T);
	for (i=0;i<T;i++){
		cin>>t[i];}
	for (i=0;i<T;i++){
		t[i]=sweet(t[i]);
		cout<<t[i]<<endl;}
	return 0;
}
