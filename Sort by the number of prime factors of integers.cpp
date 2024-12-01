#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> prime;
struct point{int m,n;};
int num(int n)
{
    int count=0;
    if (n<4) return 0;
    for (int i=0;prime[i]<=n&&n>1;i++){
        if (!(n%prime[i])){
            count++;
            while (!(n%prime[i])){
                n/=prime[i];
            }
        }
    }
    return count;
}
bool cmp(const point a1,const point a2)
{
    if (a1.n!=a2.n){
        return a1.n>a2.n;
    }
    return a1.m>a2.m;
}
int main()
{
    int n,i,j;
    cin>>n;
    vector<point> a(n);
    for (i=0;i<n;i++){
        cin>>a[i].m;
    }
    int max=a[0].m;
	for (i=0;i<n;i++){
		if (a[i].m>max){
		   max=a[i].m;
        }
    }
    prime={2,3,};
    for (i=3;i<=max;i++){
        for (j=0;j<prime.size()&&prime[j]*prime[j]<=i;j++){
            if (!(i%prime[j])){
                break;
            }
        }
        if (i%prime[j]){
            prime.push_back(i);
        }
    }
    for (i=0;i<n;i++){
        a[i].n=num(a[i].m);
    }
    sort(a.begin(),a.end(),cmp);
    for (i=0;i<n;i++){
        cout<<a[i].m<<" ";
    }
    return 0;
}