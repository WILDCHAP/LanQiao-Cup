#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n,a,b,x,i,j,k;cin>>n>>a>>b>>x;
	double dp[101][1000];		//����i��������ĺ�Ϊj�ĸ��� 
	for(i=a;i<=b;i++)
	{dp[1][i]=1.0/(b-a+1);}		//ÿ��ѡÿ�����ָ���1.0/(b-a+1) 
	for(i=2;i<=n;i++)
	for(j=1;j<=x;j++)
	dp[i][j]=0;
	for(i=2;i<=n;i++)
	{
		for(j=a;j<=b;j++)
		{
			for(k=a;k<=x;k++)		//����ѡ������j����Ϊk��ǰһ���Ϊk-j 
			{
				if(k>j)	//ǰһ�������� 
				{
					dp[i][k]+=dp[i-1][k-j]*(1.0/(b-a+1));
				} 
			}
		}
	}
	printf("%.4f",dp[n][x]);
	return 0; 
} 
