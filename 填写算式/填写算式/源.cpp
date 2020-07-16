#include<iostream>
#include<stdlib.h>
using namespace std;
int sum = 0;		//情况数

bool pd(int a[])
{
	if (((a[1] * 100 + a[2] * 10 + a[3]) + (a[4] * 100 + a[5] * 10 + a[6])) == (a[7] * 100 + a[8] * 10 + a[9]))
		return true;
	return false;
}

void f(int num[],int n)
{
	if (n == 10)				//放置了第九个数
	{
		if (pd(num))
		{
			cout << num[1] << num[2] << num[3] << "+" << num[4] << num[5] << num[6] << "=" << num[7] << num[8] << num[9] << endl;
			sum++;
		}
		return;
	}
	for (int i = n; i < 10; i++)
	{
		int t = num[n];
		num[n] = num[i];
		num[i] = t;
		f(num, n + 1);
		t = num[n];
		num[n] = num[i];
		num[i] = t;
	}
}

/*void swap(int num[],int i,int j)
{
	int t = num[i];
	num[i] = num[j];
	num[j] = t;
}*/

int main()
{
	int num[10] = { 0,1,2,3,4,5,6,7,8,9 };
	f(num, 1);
	cout << sum << endl;
	system("pause");
	return 0;
}