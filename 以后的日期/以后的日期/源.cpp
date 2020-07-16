#include<iostream>
#include<stdlib.h>
using namespace std;
//求到1949-10-1号距离多少天
int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//每月天数
int year = 365;				//一年天数
int main()
{
	int yy, mm, dd;
	char a, b;
	while (cin >> yy >> a >> mm >> b >> dd)			//输入数据
	{
		int k = 0;			//计算之间的闰年次数
		int day = 0, i;
		if (yy == 1949)					//如果输入的是本年
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
			for (i = 1950; i < yy; i++)				//统计完整年中闰年次数
			{
				if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
					k++;
			}
			day = 91 + (yy - 1950)*year + k;			//一次闰年多一天
			for (i = 0; i < (mm - 1); i++)
			{
				day = day + month[i];
			}
			day += dd;			//然后把日加上
			if (mm > 2 && ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0))		//如果选择的那一年是闰年又选择在二月之后
			{
				day = day + 1;
			}
		}
		cout << "day:" << day << endl;
	}
	system("pause");
	return 0;
}