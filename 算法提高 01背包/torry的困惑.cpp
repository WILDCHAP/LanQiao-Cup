#include<iostream>
using namespace std;

int main()
{
	int n,w[201],v[201],dp[201][5001],m,i,j;	//dp:��i����Ʒ�����ܺ�Ϊj�ļ�ֵ 
	cin>>n>>m;
	for(i=1;i<=n;i++)cin>>w[i]>>v[i];
	for(i=1;i<=m;i++)dp[0][i]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(w[i]<=j)		//�����ǰ��Ʒ���Է���
			{
				dp[i][j]=dp[i-1][j]>(v[i]+dp[i-1][j-w[i]])?dp[i-1][j]:(v[i]+dp[i-1][j-w[i]]);	/*�ŵ�ǰ��Ʒ��������Ϊjʱ�ļ�ֵΪv[i]+dp[i-1][j-w[i]*/
																/*�ͷ���ǰһ��Ʒ��������Ϊjʱ�ļ�ֵ�нϴ���Ǹ�*/ 
			} 
			else			//������ܷ� 
			{
				dp[i][j]=dp[i-1][j];	//��ǰ��Ʒ(δ��)�ļ�ֵΪǰһ����Ʒ��j�ļ�ֵ 
			} 
		}
	}
	cout<<dp[n][m]<<endl;		//���Ҫ��ľ��Ƿ�n����Ʒ(������Щ��Ʒ����û��)����Ϊm(Ҳ��С��m)��ֵ 
	return 0;
}
