#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int y = 90, x = 10;
	for (int i = 1; i <= 60; i++)
	{
		y = y - x;		//半分钟时x吃y
		if (i % 2 == 0)
			y *= 2;			//每两分钟y翻倍
		if (i % 3 == 0)
			x *= 2;			//每三分钟x翻倍
	}
	cout << y << endl;
	system("pause");
	return 0;
}