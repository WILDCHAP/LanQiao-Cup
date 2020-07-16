#include<iostream>
using namespace std;

int main()
{
	int n,a[10000],i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0],min=a[n-1],sum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
		sum+=a[i];
	}
	cout<<max<<endl<<min<<endl<<sum<<endl;
	return 0;
}
