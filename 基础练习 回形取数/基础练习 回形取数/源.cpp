/*问题描述
　　回形取数就是沿矩阵的边取数，若当前方向上无数可取或已经取过，则左转90度。一开始位于矩阵左上角，方向向下。
输入格式
　　输入第一行是两个不超过200的正整数m, n，表示矩阵的行和列。接下来m行每行n个整数，表示这个矩阵。
输出格式
　　输出只有一行，共mn个数，为输入矩阵回形取数得到的结果。数之间用一个空格分隔，行末不要有多余的空格。
样例输入
3 3
1 2 3
4 5 6
7 8 9
样例输出
1 4 7 8 9 6 3 2 5
样例输入
3 2
1 2
3 4
5 6
样例输出
1 3 5 6 4 2*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int k = 1;	
int jz[500][500];
int num[500][500];
int hang, lie;
int i, j;

void display(int n)
{
	//int h = 0;
	if (n == (hang*lie))
		return;
	while (k == 1)
	{
		if (num[i][j] == -1)
		{
			num[i][j] = 1;
			cout << jz[i++][j]<<' ';
			n++;
			if (n == (hang*lie))
				return;
		}
		else
		{
			k = 2;
			i--;
			j++;
			//n--;
		}
	}
	while (k == 2)
	{
		if (num[i][j] == -1)
		{
			num[i][j] = 1;
			cout << jz[i][j++]<<' '; n++;
			if (n == (hang*lie))
				return;
		}
		else
		{
			k = 3;
			i--;
			j--;
			//n--;
		}
	}
	while (k == 3)
	{
		if (num[i][j] == -1)
		{
			num[i][j] = 1;
			cout << jz[i--][j]<<' '; n++;
			if (n == (hang*lie))
				return;
		}
		else
		{
			k = 4;
			i++;
			j--;
			//n--;
		}
	}
	while (k == 4)
	{
		if (num[i][j] == -1)
		{
			num[i][j] = 1;
			cout << jz[i][j--]<<' '; n++;
			if (n == (hang*lie))
				return;
		}
		else
		{
			k = 1;
			i++;
			j++;
			//n--;
		}
	}
	display(n);
}

int main()
{
	cin >> hang >> lie;
	for (i = 1; i <= hang; i++)
		for (j = 1; j <= lie; j++)
		{
			cin >> jz[i][j]; num[i][j] = -1;
		}
	i = 1, j = 1;
	display(0);
	system("pause");
	return 0;
}
