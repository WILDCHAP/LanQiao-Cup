#include<iostream>
#define max(a,b) a>b?a:b
using namespace std;
int way_a[3][3]={{0,0},{1,0},{0,1}};
int way_b[3][3]={{0,0},{-1,0},{0,-1}};

int main()
{
	int m,n,a[51][51],vis[51][51];
	cin>>m>>n;
	int i,j,k,l;
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	{
		cin>>a[i][j];vis[i][j]=0;
	}
	int dp[10][10][10][10];	//dp[i][j][k][l]:两张纸条传到传到(i,j),(k,l)位置的好心最大值 
/*	for(i=0;i<=m;i++)
		dp[i][0][i][0]=dp[i][n+1][i][n+1]=0;
	for(i=0;i<=n;i++)
		dp[0][i][0][i]=dp[0][m+1][0][m+1]=0;*/
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	for(k=1;k<=m;k++)
	for(l=1;l<=n;l++)
	{
		dp[i][j][k][l]=max(max(dp[i-1][j][k-1][l],dp[i-1][j][k][l-1]),max(dp[i][j-1][k-1][l],dp[i][j-1][k][l-1]))+a[i][j]+a[k][l];
		if(i==k && j==l)
			dp[i][j][i][j]-=a[i][j];
	}
	cout<<dp[m][n][m][n];
	return 0;
} 
