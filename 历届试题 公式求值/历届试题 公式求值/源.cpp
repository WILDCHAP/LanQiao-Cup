#include<iostream>
#include<stdlib.h>
#include<math.h>
#define MOD 999101
using namespace std;

int  C(int m, int n)
{
	long long ans, a = 1, b = 1, c = 1;
	int i;
	for (i = 0; i < n; i++)
	{
		a = a*(i + 1);
	}
	for (i = 0; i < m; i++)
	{
		b = b*(i + 1);
	}
	for (i = 0; i < (n-m); i++)
	{
		c = c*(i + 1);
	}
	ans = a / (b*c);
	return ans;
}

int dfs(int n, int m, int k,int i)
{
	if (i >= n)
	{
		int a = C(m, n)*pow(i, k);
		return  a% MOD;
	}
	int b = C(i, n);
	int	c = C(m, n);
	int d=pow(i, k);
	return  (b*c*d)% MOD + dfs(n, m, k, i + 1);
}

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int ans = dfs(n, m, k, 0);
	cout << ans << endl;
	//cout << C(2,20) << endl;
	system("pause");
	return 0;
}