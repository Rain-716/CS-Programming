/*一个 int 类型变量或 double 类型变量在连续几个字节的内存中存放。读取数值时，当数值中包含小数点时类型为 double，否则类型为 int。
将读入的数值存放在 int 类型变量或 double 类型变量中。以十六进制格式（a-f 字母采用小写形式）输出相应变量的连续的每个字节的值。*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string s;
    while (cin>>s){
        bool b=0;
        for (int i=0;s[i]!='\0';i++){
            if (s[i]=='.'){
                b=1;
                break;
            }
        }
        if (!b){
            int a=stoi(s);
            int* ap=&a;
            char* cp=(char*)ap;
            for (int i=0;i<4;i++){
                cout<<hex<<setw(2)<<setfill('0')<<(int)*(cp+i)<<" ";
            }
        }
        else {
            double a=stod(s);
            double* ap=&a;
            char* cp=(char*)ap;
            for (int i=0;i<8;i++){
                cout<<hex<<setw(2)<<setfill('0')<<(int)*(cp+i)<<" ";
            }
        }
    }
    return 0;
}