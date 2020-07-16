#include<iostream>
#include<cmath>
using namespace std;

int sum(int n)
{
	int num=0,i;
	for(i=1;i<n;i++)
	if(n%i==0)
		num+=i;
	return num;
}

bool pd(int a,int b)
{
	if(sum(a)==b && a==sum(b))
		return true;
	return false;
}

int main()
{
	int a,b;cin>>a>>b;
	if(pd(a,b))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}