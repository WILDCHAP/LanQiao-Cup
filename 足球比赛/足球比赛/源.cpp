#include<iostream>
#include<stdlib.h>
using namespace std;
double a[5][5] = { { 0,0,0,0,0 },{ 0,-1,0.1,0.3,0.5 },{ 0,0.9,-1,0.7,0.4 },{ 0,0.7,0.3,-1,0.2 },{ 0,0.5,0.6,0.8,-1 } };	//初始化概率
int b[5];		//参赛队伍(1和3打,赢的在1位置;2和4打,赢的在2位置)

double gl(int i, int j, int k, int z)
{
	if (i == 1)
	{
		return (a[i][j] * a[k][z] * a[i][k] + a[i][j] * a[z][k] * a[i][z]);
	}
	if (j == 1)
	{
		return (a[j][i] * a[k][z] * a[j][k] + a[j][i] * a[z][k] * a[j][z]);
	}
	if (k == 1)
	{
		return (a[k][z] * a[i][j] * a[k][i] + a[k][z] * a[j][i] * a[k][j]);
	}
	if (z == 1)
	{
		return (a[z][k] * a[i][j] * a[z][i] + a[z][k] * a[j][i] * a[z][j]);
	}
}

int main()
{
	double gailv = 0.0;
	int sum = 0;
	for (int i = 1; i <= 4; i++)
		for (int j = 1; j <= 4; j++)
		{
			if (j == i)
				continue;
			for (int k = 1; k <= 4; k++)
			{
				if (k == i || k == j)
					continue;
				int z = 10 - i - j - k;
				sum++;
				gailv = gailv + gl(i, j, k, z);
			}
		}
	cout << gailv / (sum*1.0) << endl;
	system("pause");
	return 0;
}