#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int zh(char ch)
{
	switch (ch)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	}
}

int main()
{
	int N;		//	N����������
	cin >> N;
	string num[100];	//������������
	int ten[100];		//����ת�����ʮ��������
	int n = 0;
	while (n<N)
	{
		int i = 0, sum = 0;
		cin >> num[n];
		while (i < size(num[n]))
		{
			if (zh(num[n][i]) >= zh(num[n][i + 1]))		//ǰһ�������ڵ��ں�һ����
			{
				sum += zh(num[n][i]);
				i++;
			}
			else
			{
				sum += (zh(num[n][i + 1]) - zh(num[n][i]));
				i = i + 2;
			}
		}
		ten[n] = sum;
		n++;
	}
	for (n = 0; n < N; n++)
	{
		cout << ten[n] << endl;
	}
	system("pause");
	return 0;
}