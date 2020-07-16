#include<iostream>
using namespace std;

int main()
{
	int n,i,j,a[1001],ans=0;;cin>>n;
	for(i=1;i<=(n+1);i++)
		cin>>a[i];
	for(i=2;i<=n;i++)
	{
		ans+=a[i-1]*a[i]*a[i+1];a[i]=a[i-1];
	}
	cout<<ans;
	return 0;
} 
