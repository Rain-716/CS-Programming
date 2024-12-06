//103min 51s
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cardgame(vector <int> &a,int M)
{
    sort(a.begin(),a.end());
    int N=a.size(),max=a[0]+a[1]+a[2];
    for (int i=0;i<N-2;i++){
        for (int j=i+1;j<N-1;j++){
            int c=M-a[i]-a[j],k;
            for (k=j+1;k<N;k++){
                if (a[k]>c&&k-1>j){
                    k--;
                    break;
                }
            }
            if (k==N){
                k--;
            }
            int x=a[i]+a[j]+a[k];
            if (x>max&&x<=M){
                max=x;
            }
            if (max==M){
                return M;
            }
        }
    }
    return max;
}
int main()
{
    int T,i=0;
    cin>>T;
    while (T--){
        int N,M;
        cin>>N>>M;
        vector <int> a(N);
        for (int i=0;i<N;i++){
            cin>>a[i];
        }
        cout<<"case #"<<i++<<":"<<endl;
        cout<<cardgame(a,M)<<endl;
    }
    return 0;
}