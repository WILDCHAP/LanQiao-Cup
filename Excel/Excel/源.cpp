#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int hang, lie;
	char a, b, num[2];
	while (cin >> a >> hang >> b >> lie)
	{
		int i;
		if (lie <= 26)
		{
			num[0] = lie + 'A' - 1;
			num[1] = '\0';
			cout << num[0] << hang << endl;
		}
		else
		{
			num[0] = lie / 26 + 'A' - 1;
			num[1] = lie % 26 +'A' - 1;
			cout << num[0]<<num[1] << hang << endl;
		}
	}
	system("pause");
	return 0;
}