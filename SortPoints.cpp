#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;
struct point{long long int x,y;unsigned long long int d;};
bool cmp(const point p1,const point p2)
{
	if (p1.d==p2.d&&p1.x==p2.x){
		return p1.y<p2.y;
	}
	if (p1.d==p2.d){
		return p1.x<p2.x;
	}
    return p1.d>p2.d;
}
int main()
{
	int n;
	cin>>n;
	vector <point> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
		a[i].d=abs(a[i].x)+abs(a[i].y);
	}
	sort(a.begin(),a.end(),cmp);
	for (int i=0;i<n;i++){
		cout<<"("<<a[i].x<<","<<a[i].y<<")";
	}
	cout<<endl;
	return 0;
}
