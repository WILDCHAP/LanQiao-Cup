/*问题描述
　　给定一个N阶矩阵A，输出A的M次幂（M是非负整数）
　　例如：
　　A =
　　1 2
　　3 4
　　A的2次幂
　　7 10
　　15 22
输入格式
　　第一行是一个正整数N、M（1<=N<=30, 0<=M<=5），表示矩阵A的阶数和要求的幂数
　　接下来N行，每行N个绝对值不超过10的非负整数，描述矩阵A的值
输出格式
　　输出共N行，每行N个整数，表示A的M次幂所对应的矩阵。相邻的数之间用一个空格隔开
样例输入
2 2
1 2
3 4
样例输出
7 10
15 22*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int a[100][100],b[100][100],c[100][100];
int N, M;		//N阶矩阵，M次幂

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
	if(!M)//单位矩阵 
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
