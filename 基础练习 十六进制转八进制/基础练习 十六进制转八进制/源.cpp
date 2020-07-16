#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	int N;
	int ten = 0;
	cin >> N;
	while (N != 0)
	{
		ten = 0;
		string s;
		char eig[200];
		int top = 0, k;
		cin >> s;
		int len = s.length();
		for (int i = 0; i < len; i++)	//ÏÈ´Ó16×ª10
		{
			if (s[i] >= 'A' && s[i] <= 'F')
				ten = ten * 16 + (s[i] - 'A') + 10;
			else
				ten = ten * 16 + s[i] - '0';
		}
		while (ten != 0)
		{
			k = ten % 8;
			ten = ten / 8;
			eig[top++] ='0'+k;
		}
		eig[top] = '\0';
		top--;
		while (top >= 0)
			cout << eig[top--];
		cout << endl;
		N--;
	}
	system("pause");
	return 0;
}