#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	string num;
	long long n=0;
	cin >> num;
	int len = num.length();
	for (int i = 0; i < len; i++)
	{
		if (num[i] >= 'A'&&num[i] <= 'F')
			n = n * 16 + (num[i] - 'A')+10;
		else
			n = n * 16 + (num[i] - '0');
	}
	cout << n << endl;
	system("pause");
	return 0;
}