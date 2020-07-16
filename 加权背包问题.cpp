#include<iostream>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;

int main()
{
	int n,w,a[200],b[200];	//n件物品 分别重a[i] 价值b[i]
	int dp[200][200];		//当物品数为i时，上限重量为j时的最大价值
	/*dp[i][j]=max(dp[i-1][j-a[i]]+b[i],dp[i-1][j])*/
	cin>>n>>w; int i,j;
	for(i=1;i<=n;i++)
	cin>>a[i]>>b[i];
	for(i=1;i<=w;i++)
	dp[0][i]=0;
	for(i=1;i<=n;i++)		//从第一件物品到第n件物品 
	{
		for(j=0;j<=w;j++)
		{
			if(j>a[i])
			{
				dp[i][j]=max(dp[i-1][j-a[i]]+b[i],dp[i-1][j]);
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][w]<<endl;
	return 0;
} 
