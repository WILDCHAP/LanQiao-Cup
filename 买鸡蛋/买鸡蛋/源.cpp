#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	for (int i = 1; i < 150; i++)
	{
		int j = 150 - i;	//jÂôµÄ¼¦µ°Êý
		double y = 32.0 / i;
		double x = 24.5 / j;
		double moneyi = i*x;
		double moneyj = j*y;
		if (abs(moneyi-moneyj)<0.0001)
			cout << i << "," << j << endl;
	}
	system("pause");
	return 0;
}