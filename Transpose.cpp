#include <iostream>
#include <cstdlib>
#define N 10
using namespace std;
void swap(int* a,int* b)
{
	int* t=a;
	a=b;
	b=t;
}
void Transpose(void *a,int n)
{
    int* ai=(int*)a;
	for (int i=0;i<n;i++){
		for (int j=0;j<i;j++){
			swap(*(ai+i*n+j),*(ai+j*n+i));
		}
	}
}
int main()
{
	int *a,n,i;
	cin>>n;
    a=(int*)malloc(n*n*sizeof(int));
    for (i=0;i<n*n;i++){
    	cin>>*(a+i);
	}
    Transpose(a,n);
    for (i=0;i<n*n;i++){
    	cout<<a[i]<<" ";
		if (!((i+1)%n)){
			cout<<endl;
		}
	}
    free(a);
    return 0;
}
