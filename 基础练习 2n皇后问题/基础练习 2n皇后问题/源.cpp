/*��������
��������һ��n*n�����̣���������һЩλ�ò��ܷŻʺ�����Ҫ�������з���n���ڻʺ��n���׻ʺ�ʹ����������ڻʺ󶼲���ͬһ�С�ͬһ�л�ͬһ���Խ����ϣ�����������׻ʺ󶼲���ͬһ�С�ͬһ�л�ͬһ���Խ����ϡ����ܹ��ж����ַŷ���nС�ڵ���8��
�����ʽ
��������ĵ�һ��Ϊһ������n����ʾ���̵Ĵ�С��
����������n�У�ÿ��n��0��1�����������һ������Ϊ1����ʾ��Ӧ��λ�ÿ��ԷŻʺ����һ������Ϊ0����ʾ��Ӧ��λ�ò����ԷŻʺ�
�����ʽ
�������һ����������ʾ�ܹ��ж����ַŷ���
��������
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
�������
2
��������
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
�������
0*/
#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;
int sum = 0, N;
int map[9][9];
int init[9][9];

bool pd(int n, int a, int b)
{
	if (n != 1)
	{
		for (int i = 1; i < n; i++)
		{
			if (init[i][a] == 1 || init[i][b] == 2)		//����ͬһ��
				return false;
			if((a-(n-i))>0) 
			if(init[i][a - (n - i)] == 1)
			return false;
			if((a+(n-i))<=N)
			if(init[i][a + (n - i)] == 1)
			return false;
			if((b-(n-i))>0) 
			if(init[i][b - (n - i)] == 2)
			return false;
			if((b+(n-i))<=N)
			if(init[i][b + (n - i)] == 2)
			return false;
		}
	}
/*	if (map[n][a] == 0 || map[n][b] == 0)
		return false;*/
	return true;
}

void f(int n)
{
	if (n == (N+1))
		sum++;
	for (int i = 1; i <= N; i++)
	{
		if (!map[n][i])
			continue;
		for (int j = 1; j <= N; j++)
		{
			if (!map[n][j] || i==j)
				continue;
			init[n][i] = 1; init[n][j] = 2;
			if (pd(n, i, j))
				f(n + 1);
			init[n][i] = 0; init[n][j] = 0;
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
		{
			cin >> map[i][j]; init[i][j] = 0;
		}
	f(1);
	cout << sum;
	system("pause");
	return 0;
}

