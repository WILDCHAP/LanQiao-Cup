//划分个数
/*#include<iostream>
#include<stdlib.h>
using namespace std;

int f(int n, int m)				//总长为n划分成最长为m的组合
{
	if (n == 1 || m == 1)
		return 1;
	else if (n<m)
		return f(n, n);
	else if (n == m)
		return 1 + f(n, n - 1);
	else
		return f(n, m - 1) + f(n - m, m);
}
int main()
{
	int N;
	while (cin>>N)
	{
		cout<<f(N, N);
	}
	system("pause");
	return 0;
}*/

//划分情况
#include <iostream>
#include<stdlib.h>
using namespace std;
void f(int n, int a[], int k)
{
	if (n <= 0)
	{
		for (int i = 0; i<k; i++)
			cout << a[i] << ' '; 
		cout << endl;
		return;
	}
	for (int j = n; j>0; j--)
	{
		if (k>0 && j>a[k - 1])
			continue;
		a[k] = j;
		f(n - j, a, k + 1);
	}
}
int main()
{
	int a[1000];
	int N;
	while (cin >> N)
	{
		f(N, a, 0);
	}
	system("pause");
	return 0;
}