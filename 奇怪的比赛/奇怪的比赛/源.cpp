#include<iostream>
#include<stdlib.h>
using namespace std;
int num[11];

void dfs(int sum, int n)
{
	if (n >= 11)
	{
		if (sum == 100)
		{
			for (int i = 1; i <= 10; i++)
				cout << num[i];
			cout << endl;
		}
	}
	else
	{
		num[n] = 0;
		dfs(sum - n, n + 1);
		num[n] = 1;
		dfs(sum * 2, n + 1);
	}
}

int main()
{
	dfs(10, 1);
	system("pause");
	return 0;
}