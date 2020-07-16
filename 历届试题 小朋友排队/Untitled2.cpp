#include<iostream>
using namespace std;

int main()
{
	int n,a[101],b[101],c[101],i,j,t,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];b[i]=0;c[i]=0;
	}
	for(i=1;i<n;i++)
	for(j=1;j<=(n-i);j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];a[j]=a[j+1];a[j+1]=t;
			t=b[j];b[j]=b[j+1];b[j+1]=t;
			t=c[j];c[j]=c[j+1];c[j+1]=t;
			b[j]++;b[j+1]++;
			c[j]+=b[j];c[j+1]+=b[j+1];
		}
	}
	for(i=1;i<=n;i++)
	sum+=c[i];
	cout<<sum<<endl;
	return 0;
}
