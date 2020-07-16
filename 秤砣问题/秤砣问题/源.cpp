#include<iostream>
#include<stdlib.h>
using namespace std;
int a[5];			//存放法码，左边为－
int k = 0;			//砝码个数
int b[5] = { 81,27,9,3,1 };
int visted[5];
int y = 0;

void f(int n)
{
	if (n == 1|| n==3 ||n==9||n==27||n==81)
	{
		a[k++] = n; y = 1;
		return;
	}
	if (n == -1 || n == -3 || n == -9 || n == -27 || n == -81)
	{
		a[k++] = n; y = 1;
		return;
	}
	if (n == 0)
	{
		y = 1;
		return;
	}
	int i = 0;
	if (n > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (visted[i] == 1)
				continue;
			if (n >= 14 && n <= 40 && b[i] == 81)
				continue;
			else if (4 <= n && 14 > n && (b[i] == 81 || b[i] == 27))
				continue;
			else if (1 < n && n < 4 && (b[i] == 81 || b[i] == 27 || b[i] == 9))
				continue;
			else
			{
				a[k++] = b[i];
				visted[i] = 1;
				f(n - b[i]);
				if (y == 1)
					return;
				k--;
				visted[i] = 0;
			}
		}
	}
	if (n < 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (visted[i] == 1)
				continue;
			if (n <= -14 && n >= -40 && b[i] == 81)
				continue;
			else if (-4 >= n && -14 < n && (b[i] == 81 || b[i] == 27))
				continue;
			else if (-1 > n && n > -4 && (b[i] == 81 || b[i] == 27 || b[i] == 9))
				continue;
			else
			{
				a[k++] = -1 * b[i];
				visted[i] == 1;
				f(n + b[i]);
				if (y == 1)
					return;
				k--;
				visted[i] == 0;
			}
		}
	}
}

int main()
{
	int N;
	while (cin >> N)
	{
		f(N);
		for (int i = 0; i < k; i++)
		{
			cout << a[i]<<',';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}