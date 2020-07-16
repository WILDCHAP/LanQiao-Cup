#include<iostream>
#include<stdlib.h>
using namespace std;

int dfs(int n)
{
	if (n == 1)				//最后剩下一个，A输
		return 0;
	if (n > 1 & dfs(n - 1) == 0)		//如果剩下球大于一个且后一次取为输
		return 1;
	if (n > 3 && dfs(n - 3) == 0)
		return 1;
	if (n > 7 && dfs(n - 7) == 0)
		return 1;
	if (n > 8 && dfs(n - 8) == 0)
		return 1;
	return 0;
}

int main()
{
	int N;		//初始球数目
	while (cin >> N)
	{
		cout << dfs(N) << endl;
	}
	system("pause");
	return 0;
}