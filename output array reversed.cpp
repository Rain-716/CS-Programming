#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector<vector<int>> a(n);
    for (i=0;i<n;i++){
        int m,t;
        cin>>m;
        for (j=0;j<m;j++){
            cin>>t;
            a[i].push_back(t);
        }
    }
    for (i=n-1;i>=0;i--){
        for (j=a[i].size()-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}