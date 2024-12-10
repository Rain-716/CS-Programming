//14min 36s
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--){
        int n,m;
        cin>>n>>m;
        vector < vector <int> > a(n,vector <int> (m));
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                int t=0;
                cin>>t;
                a[i][j]+=t;
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}