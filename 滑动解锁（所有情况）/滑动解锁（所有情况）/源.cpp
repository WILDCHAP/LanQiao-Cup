#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int num = 0;	//����
int anjian[10][10] = { 0 };	//��������
int mima[10];		//����
int visted[10] = { 0 };		//��¼�Ƿ񾭹�

void dfs(int k)	//k:��ǰ�ڵ���
{
	if (k > 4)			//�ڵ㳬���ĸ��Ͷ�һ�����
	{
		num++;
	}
	for (int i = 1; i <= 9; i++)		//������1~9
	{
		if (visted[i] == 0)
		{
			if (k > 1)		//������ٴ���һ����
			{
				if (anjian[i][mima[k - 1]] != 0 && visted[anjian[i][mima[k - 1]]] == 0)
					continue;
			}
			mima[k] = i;
			visted[i] = 1;
			dfs(k + 1);
			visted[i] = 0;		//����
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
	anjian[7][9] = anjian[9][7] = 8;	//��ʼ��
	dfs(1);
	end = time(NULL);
	cout << num << endl<<beg-end<<endl;
	system("pause");
	return 0;
}