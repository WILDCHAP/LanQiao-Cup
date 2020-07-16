#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n, k;
	char num[200];
	int top = 0;		//ջ
	cin >> n;
	if(n==0)
	{
		cout<<0;
		return 0;
	}
	while (n != 0)
	{
		k = n % 16;
		n = n / 16;
		if (k <= 9)
			num[top++] = '0' + k;
		else
			num[top++] = 'A' + k-10;
	}
	num[top] = '\0';
	top--;
	while(top>=0)
		cout << num[top--];
	cout << endl;
	system("pause");
	return 0;
}
