//14min 56s
#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        if (!(s[i]=='<'&&s[i+1]=='b')){
            cout<<s[i];
        }
        else {
            cout<<endl;
            i+=3;
        }
    }
    return 0;
}