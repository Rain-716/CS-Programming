//10min 47s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n),b(n/2);
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for (int i=0;i<n/2;i++){
        b[i]=a[i]+a[n-i-1];
    }
    int max=b[0];
    for (int i=0;i<n/2;i++){
        if (b[i]>max){
            max=b[i];
        }
    }
    cout<<max<<endl;
    return 0;
}