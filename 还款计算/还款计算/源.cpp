#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	double yy, year;	//年利率
	int n;				//期数
	double x=10000.0;				//本金
	int y;				//本月利息
	cin >> year;
	yy = 0.01*year;
	cin >> n;
	int k=1;				//每月还款额度,减小时间复杂度从假设不要利息开始
	double min=1000000;						//最后一个月剩下（超过）的钱
	while (1)
	{
		for (int i = 1; i <= n; i++)		//从第一个月开始，一直到第n个月
		{
			x = ((12 + yy) / 12)*x - k*0.01;
		}
		if (abs(x) < abs(min))					//每次取绝对值最小值
		{
			min = x;
			k = k + 1;
		}
		else if (abs(x) > abs(min))
			break;
		//else if (abs(x) == abs(min))
		//{
		//	k--;
		//	break;
		//}
		x = 10000;
	}
	k--;
	cout << k << endl;
	system("pause");
	return 0;
}