#include<iostream>
#include<stdlib.h>
using namespace std;

int dfs(int n)
{
	if (n == 1)				//���ʣ��һ����A��
		return 0;
	if (n > 1 & dfs(n - 1) == 0)		//���ʣ�������һ���Һ�һ��ȡΪ��
		return 1;
	if (n > 3 && dfs(n - 3) == 0)
		return 1;
	if (n > 7 && dfs(n - 7) == 0)
		return 1;
	if (n > 8 && dfs(n - 8) == 0)
		return 1;
	return 0;
}

int main()
{
	int N;		//��ʼ����Ŀ
	while (cin >> N)
	{
		cout << dfs(N) << endl;
	}
	system("pause");
	return 0;
}