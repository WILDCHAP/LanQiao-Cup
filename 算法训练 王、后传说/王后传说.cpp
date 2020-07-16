#include<iostream>
using namespace std;
int way=0,N,a[15][15];

bool pd(int n,int k)
{
	for(int i=n+1;i<=N;i++)
	{
		if(a[i][k]==2 )
		return false;
		if((k-(i-n))>0)
		if(a[i][k-(i-n)]==2)
		return false;
		if((k+(i-n))<=N)
		if(a[i][k+(i-n)]==2)
		return false;
	}
	return true;
} 

void f(int n)
{
	if(!n)
	{
		way++;
		return;
	}	
	for(int i=1;i<=N;i++)
	{
		if(a[n][i]==1 || !pd(n,i)) continue;
		a[n][i]=2;
		f(n-1);
		a[n][i]=0;
	}
}

int main()
{
	int x,y,i,j;
	cin>>N>>x>>y;
	for(i=1;i<=N;i++)
	for(j=1;j<=N;j++)
		a[i][j]=0;
	for(i=x-1;i<=x+1;i++)
	for(j=y-1;j<=y+1;j++)
	{
		if(i<1 || i>N || j<1 || j>N) continue;
		a[i][j]=1;
	}
	f(N);
	cout<<way<<endl;
	return 0;
}
