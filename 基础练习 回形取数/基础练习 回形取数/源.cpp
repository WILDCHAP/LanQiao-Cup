/*��������
��������ȡ�������ؾ���ı�ȡ��������ǰ������������ȡ���Ѿ�ȡ��������ת90�ȡ�һ��ʼλ�ھ������Ͻǣ��������¡�
�����ʽ
���������һ��������������200��������m, n����ʾ������к��С�������m��ÿ��n����������ʾ�������
�����ʽ
�������ֻ��һ�У���mn������Ϊ����������ȡ���õ��Ľ������֮����һ���ո�ָ�����ĩ��Ҫ�ж���Ŀո�
��������
3 3
1 2 3
4 5 6
7 8 9
�������
1 4 7 8 9 6 3 2 5
��������
3 2
1 2
3 4
5 6
�������
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
