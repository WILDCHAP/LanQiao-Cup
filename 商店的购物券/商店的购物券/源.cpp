#include<iostream>
#include<stdlib.h>
using namespace std;
int style,way = 0;			//�������ͷ�����
int num[20];				//��Ʒ�۸�
int a[20][20];				//ÿһ�ַ���
int k = 1, dd = 0;
int visted[20];

bool fond(int n,int m)
{
	for (int i = 1; i < k; i++)
	{
		if (a[i][n] == m)
			return true;
	}
	return false;
}

void f(int num[],int n)
{
	if (n <= 0)
		return;
	for (int i = 1; i <= style; i++)
	{
		if (!visted[i])
		{
			if (n%num[i] == 0)
			{
				if (fond(i, n / num[i]))
					return;
				a[k++][i] = n / num[i];
				way++;
				dd = 1;
			}
		}
	}
	for (int j = 1; j <= style; j++)						//�������
	{
		if (visted[j])
			continue;
		for (int z = 1; z <= (n / num[j]); z++)				//ÿһ������Ĺ������һֱ��1�����
		{
			dd = 0;
			visted[j] = 1;
			a[k][j] = z;
			f(num, n - z*num[j]);
			visted[j] = 0;
			if(dd==0)
				a[k][j] = 0;
		}
	}
}

int main()
{
	cin >> style;
	int i = 0;
	for (i = 1; i <= style; i++)
	{
		cin >> num[i];						//������Ʒ�۸�
		visted[i] = 0;
	}
	for (i = 1; i <= 19; i++)
	{
		for (int z = 1; z <= style; z++)
			a[i][z] = 0;
	}
	f(num,1000);
	cout << way << endl;
	for (i = 1; i <= way; i++)
	{
		for (int j = 1; j <= style; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}