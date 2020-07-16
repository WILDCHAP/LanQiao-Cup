#include<iostream>
#include<stdlib.h>
using namespace std;
int N;
typedef struct {
	int i, j, k;	//��i~j�Ӵ�С�ŵ�k��
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
		cin >> num[i];				//��������
	}							
	cin >> Q;
	for (i = 1; i <= Q; i++)
	{
		cin >> ques[i].i >> ques[i].j >> ques[i].k;
	}
	i = 1;
	while (i <= Q)
	{
		copy(num, test);				//����ԭ����
		quick(test, ques[i].i, ques[i].j);	//i~j����(��-С)
		cout << fond(test, ques[i].i, ques[i].k) << endl;	//��Ӵ�С��k����
		i++;
	}
	system("pause");
	return 0;
}