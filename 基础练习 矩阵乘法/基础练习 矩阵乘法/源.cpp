/*��������
��������һ��N�׾���A�����A��M���ݣ�M�ǷǸ�������
�������磺
����A =
����1 2
����3 4
����A��2����
����7 10
����15 22
�����ʽ
������һ����һ��������N��M��1<=N<=30, 0<=M<=5������ʾ����A�Ľ�����Ҫ�������
����������N�У�ÿ��N������ֵ������10�ķǸ���������������A��ֵ
�����ʽ
���������N�У�ÿ��N����������ʾA��M��������Ӧ�ľ������ڵ���֮����һ���ո����
��������
2 2
1 2
3 4
�������
7 10
15 22*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int a[100][100],b[100][100],c[100][100];
int N, M;		//N�׾���M����

int main()
{
	cin >> N >> M;
	int i, j, m = 1, k, l;
	for(i=1;i<=N;i++)
		for (j = 1; j <= N; j++)
		{
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	if(!M)//��λ���� 
	{
		for (i = 1; i <= N; i++)
		{
			for (j = 1; j <= N; j++)
			{
				if(i==j)cout<<"1 ";
				else cout<<"0 ";
			}
			cout << endl;
		}
		return 0;
	} 
	while ((m++) != M)
	{
		for (i = 1; i <= N; i++)
			for (j = 1; j <= N; j++)
			{
				c[i][j] = 0;
			}
		for (i = 1; i <= N; i++)
			for (j = 1; j <= N; j++)
			{
				for (k = 1; k <= N; k++)
				{
					c[i][j] += (b[i][k] * a[k][j]);
				}
			}
		for (i = 1; i <= N; i++)
			for (j = 1; j <= N; j++)
			{
				b[i][j] = c[i][j];
			}
	}
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			cout << b[i][j]<<' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}


/*#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[101][101];
int c[101][101];
int ans[101][101];
int main()
{
	int i, j, k, l, m, n;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	memset(ans, 0, sizeof(ans));
	for (i = 1; i <= n; i++) ans[i][i] = 1;
	for (k = 1; k <= m; k++)
	{
		memset(c, 0, sizeof(c));
		for (i = 1; i <= n; i++)for (j = 1; j <= n; j++)for (l = 1; l <= n; l++)c[i][j] += ans[i][l] * a[l][j];
		for (i = 1; i <= n; i++)for (j = 1; j <= n; j++)ans[i][j] = c[i][j];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j<n; j++)printf("%d ", ans[i][j]);
		printf("%d\n", ans[i][n]);
	}
	system("pause");
	return 0;
}*/
