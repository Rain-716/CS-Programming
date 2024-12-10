//15min 31s
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    while (cin>>n){
        int nn=n+1;
        for (int i=1;i<=2*n+1;i+=2){
            string s(i,'*');
            cout<<setw(nn++)<<s<<endl;
        }
        nn-=2;
        for (int i=2*n-1;i>0;i-=2){
            string s(i,'*');
            cout<<setw(nn--)<<s<<endl;
        }
    }
    return 0;
}