#include<iostream>
using namespace std;

int main()
{
	int n,q;cin>>n>>q;
	int i,j,a[2000],b[2000][2],c[2000];
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<=q;i++)
	for(j=0;j<2;j++)
	cin>>b[i][j];
	for(i=1;i<=q;i++)
	{
		c[i]=9999;
		for(j=b[i][0];j<=b[i][1];j++)
		{
			if(c[i]>a[j+1])c[i]=a[j+1];
		}
	}
	for(i=1;i<=q;i++)
	cout<<c[i]<<endl;
	return 0;
} 
