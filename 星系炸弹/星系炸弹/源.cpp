#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int yy = 2014, mm = 11, dd = 9, k = 1000;
	int ddtomm[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i=0;i<k;i++)
	{
		dd++;
		if (ddtomm[mm-1] < dd)
		{
			dd=1;
			mm++;
		}
		if (mm > 12)
		{
			yy++;
			if (yy % 4 == 0 || (yy % 100 == 0 && yy % 400 != 0))
			{
				ddtomm[1] = 29;
			}
			else
				ddtomm[1] = 28;
			mm = 1;
		}
	}
	cout << "炸弹爆炸的年月日为：" << yy << '-' << mm << '-' << dd << endl;
	system("pause");
	return 0;
}