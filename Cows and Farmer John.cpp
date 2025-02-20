#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> k,n;
    while(cin){
        int t1,t2;
        cin>>t1>>t2;
        k.push_back(t1);
        n.push_back(t2);
    }
    sort(n.begin(),n.end());
    int max=n[n.size()-1];
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
    return 0;
}