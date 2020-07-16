#include<iostream>
#include<stdlib.h>
using namespace std;
int num[100][100];
int N;
int k = 1;

void display()
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			cout << num[i][j]<<" ";
		cout << endl;
	}
}

int main()
{
	int i,j,z;

	while (cin >> N)
	{
		for (i = 1; i <= N; i++)
			for (j = 1; j <= N; j++)
				num[i][j] = -1;				//初始化
		i = 1; j = 1;
		for (z = 1; z <= N*N; z++)
		{
			if (k == 1)			//如果向右
			{
				if (num[i][j] == -1)
				{
					num[i][j++] = z;
				}
				else
				{
					k = 2;
					i++;
					j--;
					z--;
				}
			}
			else if (k == 2)
			{
				if (num[i][j] == -1)
				{
					num[i++][j] = z;
				}
				else
				{
					k = 3;
					i--;
					j--;
					z--;
				}
			}
			else if (k == 3)
			{
				if (num[i][j] == -1)
				{
					num[i][j--] = z;
				}
				else
				{
					k = 4;
					i--;
					j++;
					z--;
				}
			}
			else if (k == 4)
			{
				if (num[i][j] == -1)
				{
					num[i--][j] = z;
				}
				else
				{
					k = 1;
					i++;
					j++;
					z--;
				}
			}
		}
		display();
	}
	system("pause");
	return 0;
}