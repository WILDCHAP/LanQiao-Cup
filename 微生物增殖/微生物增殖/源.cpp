#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int y = 90, x = 10;
	for (int i = 1; i <= 60; i++)
	{
		y = y - x;		//�����ʱx��y
		if (i % 2 == 0)
			y *= 2;			//ÿ������y����
		if (i % 3 == 0)
			x *= 2;			//ÿ������x����
	}
	cout << y << endl;
	system("pause");
	return 0;
}