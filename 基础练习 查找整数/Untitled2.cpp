#include<iostream>
using namespace std;

int main()
{
	int a[1001],n,x,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
