#include<iostream>
#include<stdlib.h>
using namespace std;
//用1，2，3，4，分别代表A,B,C,D
int sum = 0;

bool pd(int a[])
{
	int n = 0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] == 1)
			n++;
	}
	if (n % 2 == 0)
		return true;
	else
		return false;
}

void f(int a[], int n)
{
	if (n == 5)
	{
		if (pd(a))
			sum++;
		return;
	}
	for (int i = 1; i <= 4; i++)
	{
		a[n] = i;
		f(a, n + 1);
	}
}

int main()
{
	int a[5];			//储存选择的数组
	f(a, 0);
	cout << sum << endl;
	system("pause");
	return 0;
}