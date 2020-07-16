#include<iostream>
#include<stdlib.h>
#define max(a,b)  ((a)>(b)? (a):(b))
using namespace std;

int main()
{
	int N,i,j,a[100][100],dp[100][100];
	cin>>N;
	for(i=0;i<N;i++)
		for(j=0;j<=i;j++)
			cin>>a[i][j];
	for(i=0;i<N;i++)
		dp[N-1][i]=a[N-1][i];
	for(i=N-2;i>=0;i--)
		for(j=0;j<=i;j++)
			dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
	cout<<dp[0][0];
	system("pause");
	return 0;
} 
