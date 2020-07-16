#include<iostream>
#include<stdlib.h>
using namespace std;

void quick(int *num, int left, int right)
{
	if (left < right)
	{
		int i = left, j = right;
		num[0] = num[left];
		do
		{
			while (num[j] > num[0] && i<j)
				j--;
			if (i < j)
			{
				num[i] = num[j];
				i++;
			}
			while (num[i] < num[0] && i<j)
				i++;
			if (i < j)
			{
				num[j] = num[i];
				j--;
			}
		} while (i != j);
		num[i] = num[0];
		quick(num, left, i - 1);
		quick(num, i + 1, right);
	}
}


int main()
{
	int num[100];
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> num[i];
	}
	quick(num, 1, N);
	for (int i = 1; i <= N; i++)
	{
		cout << num[i]<<"  ";
	}
	cout << endl;
	system("pause");
	return 0;
}