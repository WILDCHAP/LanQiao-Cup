#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char s[17];
	static int weight[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	static char map[] = { '1','0','X','9','8','7','6','5','4','3','2' };
	for (int i = 0; i < 17; i++)
		cin >> s[i];
	int sum = 0;
	for (int i = 0; i<17; i++)
	{
		sum += (s[i]-'0')* weight[i];  // МоїХ
	}

	return map[sum%11];
}