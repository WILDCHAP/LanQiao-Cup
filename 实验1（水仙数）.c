#include<iostream>
#include<math.h>
//#define N 21
using namespace std;

int main()
{
	int a[21] = { 0 };
	double m=0.0;
	for (double i = pow(10, 20); i < pow(10, 21); i++)
	{
		for (int j = 20; j > 0; j--)
		{
			a[j] = i / pow(10, j);
			i = i % pow(10, j);
		}
		for (int k = 0; k < 21; k++)
		{
			m = m + a[k] * pow(21, k);
		}
		if (m == i)
			cout << m << endl;
	}
}