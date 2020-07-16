/*问题描述
　　给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。现在要向棋盘中放入n个黑皇后和n个白皇后，使任意的两个黑皇后都不在同一行、同一列或同一条对角线上，任意的两个白皇后都不在同一行、同一列或同一条对角线上。问总共有多少种放法？n小于等于8。
输入格式
　　输入的第一行为一个整数n，表示棋盘的大小。
　　接下来n行，每行n个0或1的整数，如果一个整数为1，表示对应的位置可以放皇后，如果一个整数为0，表示对应的位置不可以放皇后。
输出格式
　　输出一个整数，表示总共有多少种放法。
样例输入
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
2
样例输入
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
0*/
#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;
int sum = 0, N;
int map[9][9];
int init[9][9];

bool pd(int n, int a, int b)
{
	if (n != 1)
	{
		for (int i = 1; i < n; i++)
		{
			if (init[i][a] == 1 || init[i][b] == 2)		//不能同一列
				return false;
			if((a-(n-i))>0) 
			if(init[i][a - (n - i)] == 1)
			return false;
			if((a+(n-i))<=N)
			if(init[i][a + (n - i)] == 1)
			return false;
			if((b-(n-i))>0) 
			if(init[i][b - (n - i)] == 2)
			return false;
			if((b+(n-i))<=N)
			if(init[i][b + (n - i)] == 2)
			return false;
		}
	}
/*	if (map[n][a] == 0 || map[n][b] == 0)
		return false;*/
	return true;
}

void f(int n)
{
	if (n == (N+1))
		sum++;
	for (int i = 1; i <= N; i++)
	{
		if (!map[n][i])
			continue;
		for (int j = 1; j <= N; j++)
		{
			if (!map[n][j] || i==j)
				continue;
			init[n][i] = 1; init[n][j] = 2;
			if (pd(n, i, j))
				f(n + 1);
			init[n][i] = 0; init[n][j] = 0;
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
		{
			cin >> map[i][j]; init[i][j] = 0;
		}
	f(1);
	cout << sum;
	system("pause");
	return 0;
}

