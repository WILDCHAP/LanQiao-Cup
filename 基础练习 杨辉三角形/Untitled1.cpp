#include<iostream>
using namespace std;

int main()
{
	int n,a[100][100];cin>>n;a[1][1]=1;
	cout<<1<<endl;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
				a[i][j]=1;
				cout<<1<<' ';
			}
			else
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
				cout<<a[i][j]<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
} 
