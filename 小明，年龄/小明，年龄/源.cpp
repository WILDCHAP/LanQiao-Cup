#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int year;
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				for (int l = 0; l <= 9; l++)
				{
					year = 1000 * i + 100 * j + 10 * k + l;
					if (year >= 2014 || year <= 1934)
						continue;
					if ((i + j + k + l) == (2014 - year))
						cout << year << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}