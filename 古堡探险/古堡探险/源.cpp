#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	for (int i = 10000; i < 100000; i++)
	{
		int a = i / 10000;
		int b = i % 10000 / 1000;
		int c = i % 10000 % 1000 / 100;
		int d = i % 10000 % 1000 % 100 / 10;
		int e = i % 10;
		if (a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e) {
			continue;
		}
		int y = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
		if (y%i == 0)
			cout << a << b << c << d << e << endl;
	}
	system("pause");
	return 0;
}