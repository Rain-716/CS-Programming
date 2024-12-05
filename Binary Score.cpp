/*一个非负整数的二进制得分为这个整数的值，如果这个整数大于1，再加上按下列方法将这个整数分成若干部分后分成的每一部分的二进制得分：
如果这个整数的二进制表示中1的个数为偶数，找到其位于正中的两个1，将这个数分成两部分，
第一部分为数的最高位至找到的较高位的1，第二部分为找到的较低位的1至数的最低位；
如果这个整数的二进制表示中1的个数为奇数，找到其位于正中的一个1，将这个数分成三部分，
第一部分为数的最高位至找到的1的高一位，第二部分为1，第三部分为找到的1的低一位至数的最低位。
上述范围均包含两端点。整数的前导零可以忽略，如果分成的其中一部分中没有任何数字，该部分视为0。*/
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int count(int a)
{
    int count=0;
    while (a){
        if (a&1){
            count++;
        }
        a>>1;
    }
    return count;
}
string itob(int n)
{
	string s;
    while (n){
        s=(n% 2 ? "1" : "0")+s;
    }
    return s;
}
int count1(string s,int x,bool d)
{
    int count=0,i;
    if (!d){
        for (i=0;count!=x;i++){
            if (s[i]=='1'){
                count++;
            }
        }
        return i;
    }
    else {
        for (i=s.size();count!=x;i--){
            if (s[i]=='1'){
                count++;
            }
        }
        return i+1;
    }
}
int score(int a)
{
    if (a<=1) return a;
    else {
        int num=count(a);
        string s=itob(a);
        if (!(num/2)){
            return a+score(a>>(s.size()-count1(s,num/2,0)))+score(a%(1<<(s.size()+1-count1(s,num/2,1))));
        }
        else {
            return a+1+score(a>>(s.size()+1-count1(s,num/2+1,0)))+score(a%(1<<s.size()-count1(s,num/2+1,1)));
        }
    }
}
int main()
{
    int T;
    cin>>T;
    vector <int> a(T);
    for (int i=0;i<T;i++){
        cin>>a[i];
        cout<<score(a[i])<<endl;
    }
    return 0;
}