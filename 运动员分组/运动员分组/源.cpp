#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int N;		//����
	cin >> N;
	int n = N / 8+1;	//����
	int a[100];			//����ÿ������
	int i;
	if (N % 8 == 0)
	{
		n--;
		for (i = 0; i < n ; i++)
			a[i] = N / 8;
	}
	else
	{
		for (i = 0; i < n; i++)
			a[i] = N / n;
		for (i = 0; i < N % 8; i++)
			a[i]++;
	}
	for (i = 0; i < n; i++)
		cout << a[i] << endl;
	system("pause");
	return 0;
}