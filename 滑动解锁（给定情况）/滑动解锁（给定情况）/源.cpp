#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int num = 0;	//计数
int anjian[10][10] = { 0 };  //两个按键之间的连线
int visted[10] = { 0 };	//9个按键是否访问过
int mi[10];	
int init[10][2];
int N;

bool pd(int step)
{
	int j;
	for (int i = 1; i <= N; i++)
	{
		for (j = 1; j <= step; j++)
		{
			if ((init[i][0] == mi[j] && init[i][1] == mi[j + 1]) || (init[i][0] == mi[j + 1] && init[i][1] == mi[j]))
				break;
		}
		if (j > step)
			return false;
	}
	return true;
}


void dfs(int step)
{
	if (step >= 4)
	{
		if(pd(step-1))
			num++;
	}
	for (int i = 1; i <= 9; i++)
	{
		if (!visted[i])
		{
			if (step > 1)
			{
				if (anjian[i][mi[step - 1]] && visted[anjian[i][mi[step - 1]]])
					continue;
			}
			visted[i] = 1;
			mi[step] = i;
			dfs(step + 1);
			visted[i] = 0;
		}
	}
}


int main()
{
	time_t beg, end;
	anjian[1][3] = anjian[3][1] = 2;
	anjian[1][7] = anjian[7][1] = 4;
	anjian[1][9] = anjian[9][1] = 5;
	anjian[2][8] = anjian[8][2] = 5;
	anjian[3][7] = anjian[7][3] = 5;
	anjian[3][9] = anjian[9][3] = 6;
	anjian[4][6] = anjian[6][4] = 5;
	anjian[7][9] = anjian[9][7] = 8;	//初始化
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> init[i][0] >> init[i][1];
	}
	beg = time(NULL);
	dfs(1);
	end = time(NULL);
	cout <<"种类："<< num << endl <<"时间："<< beg - end << endl;
	system("pause");
	return 0;
}