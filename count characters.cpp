//19min 11s
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin>>T;
    string waste;
    getline(cin,waste);
    while (T--){
        string s;
        int a=0,b=0,c=0;
        getline(cin,s);
        for (int i=0;i<s.size()&&s[i]!=0;i++){
            if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                a++;
            }
            else if (s[i]>='0'&&s[i]<='9'){
                b++;
            }
            else {
                c++;
            }
        }
        cout<<"character:"<<a<<endl;
        cout<<"number:"<<b<<endl;
        cout<<"others:"<<c<<endl;
    }
    return 0;
}