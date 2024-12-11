//15min 19s
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector <bool> b(30);
    while (N--){
        int t;
        while (cin>>t&&t!=-1){
            b[t-1]=1;
        }
    }
    for (int i=0;i<30;i++){
        if(b[i]==0){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    return 0;
}