#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double i,ai,j,aj,n;
    cin>>i>>ai>>j>>aj>>n;
    double ans=ai*pow(aj/ai,(n-i)/(j-i));
    cout<<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}