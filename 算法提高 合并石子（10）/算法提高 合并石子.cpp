#include<iostream>
#define MAX 1001	
using namespace std;

int main()
{
	int n,a[1001],dp[1001]=0;	//dp[i]合并第i堆所花费用
	cin>>n;int i;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
		int min=9999;
		for(j=1;j<n-i;j++)		//计算合并第i堆的最小值 
		{
			if(min>(a[j]+a[j+1]))min=(a[j]+a[j+1]);
		}
	}
	cout<<dp[n-1]; 
	return 0;
}
