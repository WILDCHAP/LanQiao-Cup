#include<iostream>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;

int main()
{
	int n,w,a[200],b[200];	//n����Ʒ �ֱ���a[i] ��ֵb[i]
	int dp[200][200];		//����Ʒ��Ϊiʱ����������Ϊjʱ������ֵ
	/*dp[i][j]=max(dp[i-1][j-a[i]]+b[i],dp[i-1][j])*/
	cin>>n>>w; int i,j;
	for(i=1;i<=n;i++)
	cin>>a[i]>>b[i];
	for(i=1;i<=w;i++)
	dp[0][i]=0;
	for(i=1;i<=n;i++)		//�ӵ�һ����Ʒ����n����Ʒ 
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
