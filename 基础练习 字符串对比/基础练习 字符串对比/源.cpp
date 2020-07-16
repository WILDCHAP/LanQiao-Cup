#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
	char a[11], b[11];
	cin >> a >> b;
	int la = strlen(a), lb = strlen(b), type;
	if (la != lb)
		type = 1;
	else
	{
		type = 2;
		for (int i = 0; i < la; i++)
		{
			if (a[i] != b[i])
			{
				if (a[i] == (b[i] + 32) || (a[i] + 32) == b[i])
					type = 3;
				else
					type = 4;
			}
		}
	}
	cout << type;
	system("pause");
	return 0;
}