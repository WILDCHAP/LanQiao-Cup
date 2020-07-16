#include<iostream>
using namespace std;

int main()
{
	int n,w[201],v[201],dp[201][5001],m,i,j;	//dp:放i件物品质量总和为j的价值 
	cin>>n>>m;
	for(i=1;i<=n;i++)cin>>w[i]>>v[i];
	for(i=1;i<=m;i++)dp[0][i]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(w[i]<=j)		//如果当前物品可以放入
			{
				dp[i][j]=dp[i-1][j]>(v[i]+dp[i-1][j-w[i]])?dp[i-1][j]:(v[i]+dp[i-1][j-w[i]]);	/*放当前物品所用重量为j时的价值为v[i]+dp[i-1][j-w[i]*/
																/*和放入前一物品所用重量为j时的价值中较大的那个*/ 
			} 
			else			//如果不能放 
			{
				dp[i][j]=dp[i-1][j];	//当前物品(未放)的价值为前一个物品放j的价值 
			} 
		}
	}
	cout<<dp[n][m]<<endl;		//最后要求的就是放n件物品(其中有些物品可能没放)质量为m(也可小于m)的值 
	return 0;
}
