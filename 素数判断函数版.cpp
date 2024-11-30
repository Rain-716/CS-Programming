#include <iostream>
using namespace std;
bool isPrime(int n)
{  
	int i;
	if (n<=1) 
		return false;
	for (i=2;i*i<=n;i++){
		if (n%i==0)
		return false;} 
	return true;
}
int main()
{
	int n;
	cin>>n;
	bool a=isPrime(n);
	if (a)
		cout<<"Is a prime number"<<endl;
	else
		cout<<"Is NOT a prime number"<<endl;
	return 0;	
}
