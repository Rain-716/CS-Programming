#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a1,a2,b1,b2,c1,c2;
    unsigned long long int s=0;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	for (int a=a1;a<=a2;a++){
		for (int b=b1;b<=b2;b++){
			int d1=abs(a-b)+1;
			int d2=a+b-1;
			int e1= c1>d1 ? c1 : d1;
			int e2= c2<d2 ? c2 : d2;
			if (e1<=e2){
				s+=e2-e1+1;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}