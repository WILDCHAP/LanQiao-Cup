#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	int a[10001], sum = 10000;
	for (int i = 1; i <= 100; i++)		//100^2=10000 所以底数最多为100
	{
		for (int j = 2; j <= 14; j++)			//2^14=16384  所以次数最多到14
		{
			if ((int)pow(i, j) <= 10000)
				a[(int)pow(i, j)] = 1;
			if (pow(i, j) > 10000)
				break;
		}
	}
	for (int z = 1; z <= 10000; z++)
		if (a[z] == 1)
			sum--;
	cout << sum<<endl;
	system("pause");
	return 0;
}