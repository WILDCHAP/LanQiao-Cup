#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 2; i <= 10000; i++)
	{
		int a[200] = { 0 };
		int k = 0, num = 0;
		for (int j = 1; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				a[k] = j;
				k = k + 1;
				if(j!=1)
					a[k++] = i/j;
			}
		}
		for (int z = 0; z < k; z++)
		{
			num += a[z];
		}
		if (num == i)
		{
			sum += i;
			cout << "i:" << i << endl;
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}