#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int num(int n)
{
    int count=0;
    if (n==1) return 0;
    for (int i=2;i<=n&&n>1;i++){
        if (!(n%i)){
            count++;
            while (!(n%i)){
                n/=i;
            }
        }
    }
    return count;
}
bool cmp(const int a1,const int a2)
{
    if (num(a1)!=num(a2)){
        return num(a1)>num(a2);
    }
    return a1>a2;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),cmp);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}