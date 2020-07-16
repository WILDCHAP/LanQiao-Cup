#include<iostream>
#include<stdlib.h>
using namespace std;
int min = 9999;

void f(int n,int k)
{
	if (n == 0)
	{
		min=k < min ? k : min;
		return;
	}
	if((k/2)>1)
		f(n - 1,k*2);			//偶数
	if(((k-1)/3)>1 && (k-1)%3==0)
		f(n - 1, (k - 1) / 3);	//奇数
}

int main()
{
	int N;
	while (cin >> N)
	{
		min = 9999;
		if (N == 0)
			min = 1;
		else if (N == 1)
			min = 2;
		else if (N == 2)
			min = 4;
		else
		{
			f(N - 2,4);			//经过N-2步到达4；
		}
		cout << min << endl;
	}
	system("pause");
	return 0;
}