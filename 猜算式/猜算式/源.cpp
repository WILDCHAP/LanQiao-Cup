#include<iostream>
#include<stdlib.h>
int a[6];
using namespace std;

int pd()
{
	int sum[10] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		int k = 0;
		while (a[i] != 0)
		{
			sum[a[i] % 10]++;
			if (sum[a[i] % 10] > 2)			//如果一个数出现了超过两次
				return 0;
			a[i] = a[i] / 10;
			k++;							//位数
		}
		if (k!=3 && k!=5)
			return 0;
	}
	return 1;
}

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			a[0] = (j % 10)*i; a[1] = (j / 10 % 10)*i;
			a[2] = (j / 100)*i; a[3] = i*j;
			a[4] = i; a[5] = j;
			if (pd() == 1)
			{
				cout << i*j << endl;
			}
		}
	}
	system("pause");
	return 0;
}