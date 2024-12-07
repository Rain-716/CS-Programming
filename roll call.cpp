//10min 56s
#include <iostream>
using namespace std;
int main()
{
    int T,k=0;
    cin>>T;
    while (T--)
    {
        int m,n,count=0;
        cin>>m>>n;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                char t;
                cin>>t;
                if (t=='.'){
                    count++;
                }
            }
        }
        cout<<"case #"<<k++<<":"<<endl;
        cout<<count<<endl;
    }
    return 0;
}