#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double s=0;
    cin>>n;
    vector <double> a(n);
    for (int i=0;i<n;i++){
        string waste;
        cin>>waste>>a[i];
        s+=a[i];
    }
    double ave=s/n;
    double S2;
    for (int i=0;i<n;i++){
        S2+=pow(ave-a[i],2.0);
    }
    S2=sqrt(S2/(n-1));
    cout<<fixed<<setprecision(2)<<ave<<" "<<S2<<endl;
    return 0;
}