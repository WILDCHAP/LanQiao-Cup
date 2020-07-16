#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int x, y;
	bool tag=false;
	for (x = 0; x <= 35; x++)
	{
		for (y = 0; y < 41; y++)
		{
			if ((2.3*x + 1.9*y) == 82.3)
			{
				if (x < y)
				{
					tag = true;
					break;
				}
			}
		}
		if (tag)
			break;
	}
	cout << "Æ¡¾ÆÊýÄ¿£º" << x << endl;
	system("pause");
	return 0;
}