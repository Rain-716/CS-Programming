#include <iostream>
using namespace std;
int main()
{
    int n,dir,i,j;
    cin>>n>>dir;
    char s[2][n];
    for (i=0;i<2;i++){
        for (j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    if (dir==1){
        char x=s[0][n-1];
        char y=s[1][0];
        for (j=n-2;j>=0;j--){
            s[0][j+1]=s[0][j];
        }
        for (j=1;j<n;j++){
            s[1][j-1]=s[1][j];
        }
        s[1][n-1]=x;
        s[0][0]=y;
    }
    if (dir==2){
        char x=s[0][0];
        char y=s[1][n-1];
        for (j=n-2;j>=0;j--){
            s[1][j+1]=s[1][j];
        }
        for (j=1;j<n;j++){
            s[0][j-1]=s[0][j];
        }
        s[1][0]=x;
        s[0][n-1]=y;
    }
    for (i=0;i<2;i++){
        for (j=0;j<n;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }
    return 0;
}