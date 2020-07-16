//注：动态规划
#include<iostream>
#include<stdlib.h>
#define MOD 1000000007;
using namespace std;

int main()
{
	int K, L;
	cin >> K >> L;
	int dp[200][200];		//表示以j为结尾，长度为i的‘K好数’
	int i, j, k ;
	dp[1][0] = 0;			//第一个数不能是0
	for (i = 1; i < K; i++)
	{
		dp[1][i] = 1;		//初始化长度为1的K好数
	}
	for (i = 2; i <= L; i++)
		for (j = 0; j < K; j++)
			dp[i][j] = 0;
	for (i = 2; i <= L; i++)			//控制长度1~L
	{
		for (j = 0; j < K; j++)			//区别和上一长度结尾不匹配的
		{
			for (k = 0; k < K; k++)		//控制尾数0~K-1
			{
				if (k == j - 1 || k == j + 1)	//判断是否相邻
					continue;
				//dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
				dp[i][k] = (dp[i][k] + dp[i - 1][j]) % MOD;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < K; i++)
		ans = (ans + dp[L][i]) % MOD;
	cout<<ans<<endl;
	system("pause");
	return 0;
}