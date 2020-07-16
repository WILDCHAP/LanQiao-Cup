#include<iostream>
#include<math.h>
//#define max((a),(b)) (a)>(b)?(a):(b)
using namespace std;
int dp[101];
bool isprim(int n)		//判断质数 
{
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)return false;
	return true;
} 
int main()
{
	int n,i,j;cin>>n;dp[0]=dp[1]=dp[2]=dp[3]=0;
	for(i=4;i<=n;i++)	//j表示当前糖果数dp[i]表示有i个糖果时最多能拿多少个 
	{
		for(j=2;j<=sqrt(i);j++)	//找出小于根号i的质因数
		{
			if(!isprim(j)||i%j!=0)
			continue;
			dp[i]=dp[i]>j+dp[i-2*j]?dp[i]:j+dp[i-2*j];
		}
	}
	cout<<dp[n];
	return 0;
}
