#include<iostream>
#include<stdlib.h>
using namespace std;
int num = 0,zzzz;
int pl[10] = { 0 };	//9��������: 1 A  2 B  3 C
int guo[4][4] = { {0,0,0,0},{3,1,1,1},{ 3,1,1,1 },{ 3,1,1,1 } };	//��������ʣ�µ�����(ÿ���˲�ͬ������)

bool pd(int step, int n)
{
	if (n== pl[step - 2] && n == pl[step - 1])
		return false;
	return true;
}

void dfs(int step)
{
	if (step > 9)
	{
		num++;
		zzzz = 1;
	}
	for (int i = 1; i <= 3; i++)		//i��1~3�ֱ��ʾ����һ��λ����ĳ����
	{
		if (guo[i][0] == 0)
			continue;
		for (int j = 1; j <= 3; j++)
		{
			if (guo[i][j] == 0)
				continue;
			if (step > 2)
			{
				if (!pd(step, i))		//�жϵ�step��λ���ܷ���i����
					continue;
			}
			guo[i][0] = guo[i][0] - 1;
			guo[i][j] = 0;
			pl[step] = i;		//��step��λ����i����
			dfs(step + 1);
			guo[i][0] = guo[i][0] + 1;
			guo[i][j] = 1;
		}
	}
}

int main()
{
	dfs(1);
	cout << num << endl;
	system("pause");
	return 0;
}

//