#include<iostream>
#include<stdlib.h>
using namespace std;
int num = 0;
int qp[8][8] = { 0 };

bool pd(int k, int z)	//kÐÐ iÁÐ
{
	for (int i = k; i >= 0; i--)
	{
		if (qp[i][z] == 1)
			return false;
		if((z - (k - i))>=0)
			if(qp[i][z-(k-i)]==1)
				return false;
		if (z + (k - i)<=7)
			if (qp[i][z + (k - i)] == 1)
				return false;
	}
	return true;
}


void dfs(int k)
{
	if (k >= 8)
		num++;
	for (int i = 0; i < 8; i++)
	{
		if (!pd(k, i))
			continue;
		qp[k][i] = 1;
		dfs(k + 1);
		qp[k][i] = 0;
	}
}


int main()
{
	dfs(0);
	cout << num << endl;
	system("pause");
	return 0;
}