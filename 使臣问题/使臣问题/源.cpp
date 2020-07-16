#include<iostream>
#include<stdlib.h>
using namespace std;
int N, sumlen = 0, len = 0, eend = -1;
int city[100][100];	//��¼��������֮��ľ���
int visted[100][100] = { 0 };	//��Ƿ���

int cup(int len)		//���㻨�Ѻ���
{
	int spen = 0;
	for (int x = 1; x <= len; x++)
	{
		spen += (x + 10);
	}
	return spen;
}

void dfs(int k, int chang)
{
	for (int i = 1; i <= N; i++)
	{
		if (visted[k][i] == 1 || city[k][i] == -1)	//�����һ��Ҫȥ�ĳ����Ѿ�����
			continue;
		visted[i][k] = visted[k][i] = 1;	//��Ǿ���
		dfs(i, chang+city[k][i]);
		visted[i][k] = visted[k][i] = 0;	//����
	}
	if (chang>sumlen)
	{
		sumlen = chang;		//ȡ�����
		eend = k;		//��¼β�ڵ�
	}
}

int main()
{
	cin >> N;
	int n, m, q, lon = 0, beg, end,i;
	for (int j = 0; j <= N; j++)
		for (int x = 0; x <= N; x++)
			city[j][x] = -1;
	for (i = 0; i<(N - 1); i++)
	{
		cin >> n >> m >> q;
		city[n][m] = city[m][n] = q;
	}
	for (i = 1; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
			for (int x = 0; x <= N; x++)
				visted[j][x] = 0;
		sumlen = 0;
		len = 0;
		dfs(i, 0);		//��i�ǿ�ʼ����,�������Ϊ0
		if (sumlen>lon)
		{
			lon = sumlen;
			beg = i;
			end = eend;
		}
	}
	cout << "�ô󳼴ӳ���" << beg << "������" << end << "������ࣺ" << cup(lon) << endl;
	system("pause");
	return 0;
}


/*#include <iostream>  
#include <string.h>  
using namespace std;
int n, val, Map[1001][1001];
bool vis[1001][1001];
void dfs(int i, int v)
{
	int j;
	for (j = 1; j <= n; ++j)
	{
		if (Map[i][j] == -1 || vis[i][j]) continue;
		vis[i][j] = vis[j][i] = 1;
		dfs(j, v + Map[i][j]);
		vis[i][j] = vis[j][i] = 0;
	}
	val = v>val ? v : val;
}

int find_max(void)
{
	int i, Max;
	Max = -1;
	for (i = 1; i <= n; ++i)
	{
		memset(vis, 0, sizeof(vis));
		val = -1;
		dfs(i, 0);
		Max = val>Max ? val : Max;
	}
	return Max;
}

int main()
{
	int i, p, q, d, num, sum;
	while (cin >> n)
	{
		memset(Map, -1, sizeof(Map));

		for (i = 1; i<n; ++i)
		{
			cin >> p >> q >> d;
			Map[p][q] = d;
			Map[q][p] = d;
		}

		num = find_max();
		if (num & 1) sum = (num + 1)*(num / 2) + (num + 1) / 2;
		else    sum = (num*num + num) / 2;
		cout << sum + num * 10 << endl;
	}
	return 0;
}*/