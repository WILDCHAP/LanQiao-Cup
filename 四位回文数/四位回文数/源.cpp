#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 10; i <= 99; i++)
	{
		for (int j = 0; j <= 99; j++)
		{
			if (i == ((j % 10) * 10 + j / 10))
			{
				cout << i * 100 + j << endl;
				sum++;
			}
		}
	}
	//cout << sum << endl;
	system("pause");
	return 0;
}
