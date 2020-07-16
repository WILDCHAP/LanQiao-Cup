#include<iostream>
#include<stdlib.h>
using namespace std;
char a[100][100];
int N;				//最外层为N个星号
void display(int beg, int n)
{
	int i, j;
	for (i = beg; i <= (beg + n - 1); i++)			//第i行
	{
		if (i == beg || i == (n + beg - 1))
		{
			for (int z = beg; z <= (beg + n - 1); z++)
				a[i][z] = '*';
		}
		else
		{
			a[i][beg] = a[i][(beg + n - 1)] = '*';
		}
	}
	if (n == 1 || n - 4 <= 0)				//显示到最内层
		return;
	else
	{
		display(beg + 2, n - 4);
	}
}


int main()
{
	while (cin >> N)
	{
		display(1, N);
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
				cout << a[i][j];
			cout << endl;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}