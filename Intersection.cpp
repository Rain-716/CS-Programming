#include <iostream>
#include <algorithm>
#define N 100
using namespace std;
int Intersection(int s1[],int n1,int s2[],int n2,int r[])
{
	int i=0,j=0,k=0,ii=0;
	sort(s1,s1+n1);
	sort(s2,s2+n2);
	for (j=0;j<n2;j++){
		for (i=ii;i<n1;i++){
			if (s1[i]==s2[j]){
				r[k++]=s1[i];
				ii=i+1;
				break;
			}
		}
	}
	return k;
}
int main()
{
 int n1,n2,i;
    int s1[N],s2[N],r[N];
    cin>>n1;
    for (i=0;i<n1;i++){
    	cin>>s1[i];
	}
    cin>>n2;
    for (i=0;i<n2;i++){
    	cin>>s2[i];
	}
    int n=Intersection(s1,n1,s2,n2,r);
    for (i=0;i<n;i++){
    	cout<<r[i]<<" ";
	}
	cout<<endl;
    return 0;
}
