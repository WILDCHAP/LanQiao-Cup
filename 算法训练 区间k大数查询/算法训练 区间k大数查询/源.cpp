#include<iostream>
#include<stdlib.h>
using namespace std;
int N;
typedef struct {
	int i, j, k;	//从i~j从大到小排第k个
}ask;

void quick(int *num, int left, int right)
{
	if (left < right)
	{
		int i = left, j = right;
		num[0] = num[left];
		do
		{
			while (num[j] < num[0] && i < j)
				j--;
			if (i < j)
			{
				num[i] = num[j];
				i++;
			}
			while (num[i] > num[0] && i < j)
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

int fond(int *num, int beg, int len)
{
	return num[beg + len-1];
}

void copy(int *num, int *test)
{
	for (int i = 1; i <= N; i++)
		test[i] = num[i];
}

int main()
{
	ask ques[200];
	int num[200],Q,test[200];
	cin >> N;
	int i;
	for (i = 1; i <= N; i++)
	{
		cin >> num[i];				//输入数组
	}							
	cin >> Q;
	for (i = 1; i <= Q; i++)
	{
		cin >> ques[i].i >> ques[i].j >> ques[i].k;
	}
	i = 1;
	while (i <= Q)
	{
		copy(num, test);				//保存原数组
		quick(test, ques[i].i, ques[i].j);	//i~j排序(大-小)
		cout << fond(test, ques[i].i, ques[i].k) << endl;	//求从大到小第k个数
		i++;
	}
	system("pause");
	return 0;
}