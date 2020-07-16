#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int num = 0;	//计数
int anjian[10][10] = { 0 };	//两键连线
int mima[10];		//密码
int visted[10] = { 0 };		//记录是否经过

void dfs(int k)	//k:当前节点数
{
	if (k > 4)			//节点超过四个就多一种情况
	{
		num++;
	}
	for (int i = 1; i <= 9; i++)		//按键从1~9
	{
		if (visted[i] == 0)
		{
			if (k > 1)		//如果至少存在一条线
			{
				if (anjian[i][mima[k - 1]] != 0 && visted[anjian[i][mima[k - 1]]] == 0)
					continue;
			}
			mima[k] = i;
			visted[i] = 1;
			dfs(k + 1);
			visted[i] = 0;		//回溯
		}
	}
}

int main()
{
	time_t beg, end;
	beg = time(NULL);
	anjian[1][3] = anjian[3][1] = 2;
	anjian[1][7] = anjian[7][1] = 4;
	anjian[1][9] = anjian[9][1] = 5;
	anjian[2][8] = anjian[8][2] = 5;
	anjian[3][7] = anjian[7][3] = 5;
	anjian[3][9] = anjian[9][3] = 6;
	anjian[4][6] = anjian[6][4] = 5;
	anjian[7][9] = anjian[9][7] = 8;	//初始化
	dfs(1);
	end = time(NULL);
	cout << num << endl<<beg-end<<endl;
	system("pause");
	return 0;
}