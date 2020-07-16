#include<iostream>
using namespace std;

int main()
{
	int m,s,n,i,j,k,a[100][100],b[100][100],c[100][100];
	cin>>m>>s>>n;
	for(i=1;i<=m;i++)
	for(j=1;j<=s;j++)
	cin>>a[i][j];
	for(i=1;i<=s;i++)
	for(j=1;j<=n;j++)
	cin>>b[i][j];
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			c[i][j]=0;
			for(k=1;k<=s;k++)
			c[i][j]+=(a[i][k]*b[k][j]);
			cout<<c[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
