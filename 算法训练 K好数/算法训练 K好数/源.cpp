//ע����̬�滮
#include<iostream>
#include<stdlib.h>
#define MOD 1000000007;
using namespace std;

int main()
{
	int K, L;
	cin >> K >> L;
	int dp[200][200];		//��ʾ��jΪ��β������Ϊi�ġ�K������
	int i, j, k ;
	dp[1][0] = 0;			//��һ����������0
	for (i = 1; i < K; i++)
	{
		dp[1][i] = 1;		//��ʼ������Ϊ1��K����
	}
	for (i = 2; i <= L; i++)
		for (j = 0; j < K; j++)
			dp[i][j] = 0;
	for (i = 2; i <= L; i++)			//���Ƴ���1~L
	{
		for (j = 0; j < K; j++)			//�������һ���Ƚ�β��ƥ���
		{
			for (k = 0; k < K; k++)		//����β��0~K-1
			{
				if (k == j - 1 || k == j + 1)	//�ж��Ƿ�����
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