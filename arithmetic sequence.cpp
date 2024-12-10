//11min 2s
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> a;
    int t;
    while(cin>>t){
        a.push_back(t);
    }
    int d=a[1]-a[0];
    for (int i=0;i<a.size();i++){
        if (a[i]!=a[0]+i*d){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}