#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int N;
	while (cin >> N)
	{
		int point = 0;
		int a = N / 1000;
		int b = (N % 1000)/ 100;
		int c = (N % 100)/ 10;
		int d = N % 10;
		if ((a == b + 1 && b == c + 1 && c == d + 1)||(a == b - 1 && b == c - 1 && c == d - 1))
			point += 5;
		if (a == b && a == c)
			point += 3;
		if (b == c && c == d)
			point += 3;
		if (a == b && c == d)
			point += 1;
		if (a == c && b == d)
			point += 1;
		if (a == 6 || a == 8 || a == 9)
			point += 1;
		if (b == 6 || b == 8 || b == 9)
			point += 1;
		if (c == 6 || c == 8 || c == 9)
			point += 1;
		if (d == 6 || d == 8 || d == 9)
			point += 1;
		cout << "point=" << point << endl;
	}
	system("pause");
	return 0;
}