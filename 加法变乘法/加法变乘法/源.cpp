#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int ans = 0;
	for (int i = 0; i < 50; i++)
	{
		for (int j = 2; j < 50; j++)
		{
			if (i == j || i > j || i == j - 1)
				continue;
			if ((i*i - i + j*j - j) == 792)
			{
				ans++;
				cout << "i=" << i << ",j=" << j << endl;
			}
		}
	}
	cout << "Ò»¹²"<<ans << "¸ö"<<endl;
	system("pause");
	return 0;
}