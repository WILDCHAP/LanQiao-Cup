/*#include<iostream>
#include<stdlib.h>
using namespace std;
int k, z = 0;				//k:记录循环开始点，z:记录数组大小

bool pd(int b[], int n)		//判断数字n是否在数组b中出现过
{
	int i = 0;
	if (z != 0)
	{
		for (i = 0; i < z ; i++)
		{
			if (b[i] == n)
			{
				k = i;
				return false;
			}
		}
	}
	return true;
}

void KPUP(int a[],int left,int right)			//快排，从大到小，求最大数
{
	if (right > left)
	{
		a[0] = a[left];
		int j = right, i = left;
		do
		{
			while (a[j] < a[0] && i<j)
				j--;
			if (i < j)
			{
				a[i] = a[j];
				i++;
			}
			while (a[i] > a[0] && i < j)
				i++;
			if (i < j)
			{
				a[j] = a[i];
				j--;
			}
		} while (i != j);
		a[i] = a[0];
		KPUP(a, left, i - 1);
		KPUP(a, i + 1, right);
	}
}

void KPDOWN(int a[], int left, int right)			//快排，从小到大，求最小数
{
	if (right > left)
	{
		a[0] = a[left];
		int j = right, i = left;
		do
		{
			while (a[j] > a[0] && i<j)
				j--;
			if (i < j)
			{
				a[i] = a[j];
				i++;
			}
			while (a[i] < a[0] && i < j)
				i++;
			if (i < j)
			{
				a[j] = a[i];
				j--;
			}
		} while (i != j);
		a[i] = a[0];
		KPDOWN(a, left, i - 1);
		KPDOWN(a, i + 1, right);
	}
}

int cha(int a[])
{
	int m = (a[1] * 10000 + a[2] * 1000 + a[3] * 100 + a[4] * 10 + a[5]) - (a[5] * 10000 + a[4] * 1000 + a[3] * 100 + a[2] * 10 + a[1]);
	return m;
}

int main()
{
	int i, one, two, three, four, five;
	int b[100], a[6], minu;				//保存经过数组
	int tag[100];
	for (i = 0; i < 100; i++)
		tag[i] = 0;
	for (i = 10000; i <= 99998; i++)
	{
		a[1]=one = i / 10000;
		a[2]=two = (i / 1000) % 10;
		a[3]=three = (i % 100) % 10;
		a[4]=four = (i % 10) % 10;
		a[5]=five = i % 10;
		KPUP(a, 1, 5);
		minu = cha(a);
		while (1)
		{
			if (!pd(b, minu))		//如果存在，就输出次循环
			{
				if (!tag[k])
				{
					int j;
					cout << "[" << b[k];
					for (j = k + 1; j < z; j++)
					{
						cout << ',' << b[j];
					}
					cout << "]" << endl;
					for (j = k; j <= z; j++)
						tag[j] = 1;
					break;
				}
			}
			else					//如果不存在，就进入循环
			{
				b[z++] = minu;
			}
			a[1] = one = minu / 10000;
			a[2] = two = (minu / 1000) % 10;
			a[3] = three = (minu % 100) % 10;
			a[4] = four = (minu % 10) % 10;
			a[5] = five = minu % 10;
			KPUP(a, 1, 5);
			minu = cha(a);
		}
	}
	system("pause");
	return 0;
}*/



#include <iostream>
#include <algorithm>
using namespace std;
int shu(int num)
{
	int a[5], d = 0, x = 0;
	for (int i = 0; i<5; i++)
	{
		a[i] = num % 10;
		num /= 10;
	}
	sort(a, a + 5);
	for (int i = 0; i<5; i++)
	{
		d = d * 10 + a[i];
		x = x * 10 + a[4 - i];
	}
	return x - d;
}
bool xunhuan(int a[10], int j, int b[100], int bnum)
{
	for (int i = 0; i<bnum; i++)
	{
		if (a[j] == b[i]) return false;
	}
	if (a[0] == a[j] && j != 0)return true;

	else return false;
}
int main()
{
	int a[10], cha, b[100], bnum = 0;
	for (int i = 10001; i <= 99998; i++)
	{
		cha = shu(i);
		if (cha == 0) continue;
		for (int j = 0; j<10; j++)
		{
			a[j] = cha;
			cha = shu(a[j]);
			if (xunhuan(a, j, b, bnum))
			{
				cout << "[" << a[0];
				b[bnum] = a[0];
				bnum++;
				for (int ij = 1; ij<j; ij++)
				{
					cout << "," << a[ij];
					b[bnum] = a[ij];
					bnum++;
				}
				cout << "]" << endl;
				break;
			}
		}
	}
	return 0;
}