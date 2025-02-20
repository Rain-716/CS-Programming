#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int P;
    cin>>P;
    while(P--){
        vector <int> a(10);
        int i;
        cin>>i;
        for (int i=0;i<10;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<i<<" "<<a[7]<<endl;
    }
    return 0;
}