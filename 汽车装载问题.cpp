/*1.贪心*/
/*#include<iostream>
using namespace std;
int n,a[200],w;	//n个箱子 每个物品重量a[i](从大到小) 载重w
void f(int x,int now)	//还剩x载重，现在到了now元素
{
	if(x<=0 || (now==n && x<a[n])) return ; 
	if(x>=a[now])
	{
		cout<<a[now]<<' ';f(x-a[now],now+1); 
	} 
	else
	f(x,now+1); 
} 

int main()
{
	cin>>n>>w;int i;
	for(i=1;i<=n;i++)cin>>a[i]; 
	f(w,1); 
	return 0;
}*/ 

/*输入4 10 8 3 3 3
输出8*/

/*动态规划*/ 
#include<iostream>
using namespace std;
int n,a[200],w;	//n个箱子 每个物品重量a[i](从大到小) 载重w
int main()
{
	cin>>n>>w;
	int i,j,k,dp[200][200],vist[200];		//dp[i]表示放i件物品的重量的最大值 
	for(i=1;i<=n;i++){cin>>a[i];vist[i]=0;} 
	dp[0][0]=0; 
	for(i=1;i<=n;i++)		//从第一个物品到第n个物品 
	{
		for(k=1;k<=n;k++)	//此次选择的物品 
		{
			if(vist[k])continue;
			vist[k]=1;		//标记该物品使用
			for(j=0;j<=w;j++)	//这次选择的重量 
			{
				if(j>a[k])			//只有上一次选择了才行
				{
					dp[i][j]=(dp[i-1][j-a[k]]+a[k])>dp[i-1][j]?(dp[i-1][j-a[k]]+a[k]):dp[i-1][j]; 
				}
				else
				dp[i][j]=dp[i-1][j]; 
			}
		} 
	}
	cout<<dp[1][w]<<endl; 
	return 0; 
}



