/*一个非负整数的二进制得分为这个整数的值，如果这个整数大于1，再加上按下列方法将这个整数分成若干部分后分成的每一部分的二进制得分：
如果这个整数的二进制表示中1的个数为偶数，找到其位于正中的两个1，将这个数分成两部分，
第一部分为数的最高位至找到的较高位的1，第二部分为找到的较低位的1至数的最低位；
如果这个整数的二进制表示中1的个数为奇数，找到其位于正中的一个1，将这个数分成三部分，
第一部分为数的最高位至找到的1的高一位，第二部分为1，第三部分为找到的1的低一位至数的最低位。
上述范围均包含两端点。整数的前导零可以忽略，如果分成的其中一部分中没有任何数字，该部分视为0。*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <char> s;
int count(int a)
{
    int count=0;
    while (a){
        if (a&1){
            count++;
        }
        a>>=1;
    }
    return count;
}
void itob(int n)
{
    int i=0;
    while (n){
        int t= n%2 ? '1' : '0';
        s.push_back(t);
        n/=2;
    }
    reverse(s.begin(),s.end());
}
int count1(vector <char> &s,int x)
{
    int count=0,i;
    for (i=0;(count<x)&&(i<s.size());i++){
        if (s[i]=='1'){
            count++;
        }
    }
    return i+1;
}
int score(int a)
{
    if (a<=1) return a;
    else {
        int num=count(a);
        itob(a);
        int length=s.size();
        if (!(num%2)){
            int x1=count1(s,num/2),x2=x1;
            while (s[x2]='0'){
                x2++;
            }
            return a+score(a>>(length+1-x1))+score(a&(1<<(length+1-x2)-1));
        }
        else {
            int x=count1(s,(num+1)/2);
            return a+1+score(a>>(length+1-x))+score(a&(1<<(length-x)-1));
        }
    }
}
int main()
{
    int T;
    cin>>T;
    while (T--){
        int a;
        cin>>a;
        cout<<score(a)<<endl;
    }
    return 0;
}