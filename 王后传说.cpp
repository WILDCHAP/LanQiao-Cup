#include<iostream>
using namespace std;
int way=0;

void f(int n)
{
	if(!n)	return;
	for(int i=1;i<=n;i++)
	{
		if(a[n][i]==1 || !pd()) continue;
		a[n][i]=2;
		f(n-1);
		a[n][i]=0;
	}
}

int main()
{
	int n,a[15][15],x,y,i,j;
	cin>>n>>x>>y;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		a[i][j]=0;
	//a[x][y]=1;
	for(i=x-1;i<=x+1;i++)
	for(j=y-1;j<=y+1;j++)
	{
		if(i<1 || i>n || j<0 || j>n) continue;
		a[i][j]=1;
	}
	f(n);
	cout<<way<<endl;
	return 0;
}