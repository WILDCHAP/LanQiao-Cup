#include<iostream>
#include<stdlib.h>
using namespace std;

int f(int k,int n)
{
	if(k==0 ||k==n)
		return 1;
	else
	return f(k,n-1)+f(k-1,n-1);
}

int main()
{
	int k,n;
	cin>>k>>n;
	cout<<f(k,n)<<endl;
	system("pause");
	return 0;
} 
