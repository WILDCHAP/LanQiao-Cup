#include<iostream>
#include<stdlib.h>
using namespace std;
//��1949-10-1�ž��������
int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//ÿ������
int year = 365;				//һ������
int main()
{
	int yy, mm, dd;
	char a, b;
	while (cin >> yy >> a >> mm >> b >> dd)			//��������
	{
		int k = 0;			//����֮����������
		int day = 0, i;
		if (yy == 1949)					//���������Ǳ���
		{
			if (mm == 10)
				day = dd - 1;
			else
			{
				day = 30 + (mm - 11) * 30 + dd;
			}
		}
		else
		{
			for (i = 1950; i < yy; i++)				//ͳ�����������������
			{
				if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
					k++;
			}
			day = 91 + (yy - 1950)*year + k;			//һ�������һ��
			for (i = 0; i < (mm - 1); i++)
			{
				day = day + month[i];
			}
			day += dd;			//Ȼ����ռ���
			if (mm > 2 && ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0))		//���ѡ�����һ����������ѡ���ڶ���֮��
			{
				day = day + 1;
			}
		}
		cout << "day:" << day << endl;
	}
	system("pause");
	return 0;
}