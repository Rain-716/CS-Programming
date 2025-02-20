#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        string a,b;
        cin>>a>>b;
        int i=a.find(b);
        if (i>=0){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}