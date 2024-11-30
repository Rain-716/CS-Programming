#include <iostream>
#include <vector>
using namespace std;
int arrmax(const vector<int>&a)
{
	int max=a[0];
	for (int i=0;i<a.size();i++){
		if (a[i]>max){
		   max=a[i];
		}
	}
  	return max;
}
int arrmin(const vector<int>&a)
{
	int min=a[0];
	for (int i=0;i<a.size();i++){
		if (a[i]<min){
		   min=a[i];
		}
	}
  	return min;
}
int average(const vector<int>&a)
{
	int s=0;
	for (int i=0;i<a.size();i++){
		s+=a[i];
	}
	int ave=s/a.size();
	return ave;
}
int main()
{
	int T,t;
	cin>>T;
	for (int i=0;i<T;i++){
		vector<int> a;
		while (cin>>t&&t!=-1){
			a.push_back(t);
		}
		cout<<"case #"<<i<<":"<<endl;
		cout<<arrmax(a)<<endl;
		cout<<arrmin(a)<<endl;
		cout<<average(a)<<endl;
	}
	return 0;
}
