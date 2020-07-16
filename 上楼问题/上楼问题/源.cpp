#include<iostream>
#include<stdlib.h>
using namespace std;

int f(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	return f(n - 1) + f(n - 2);
}

int main()
{
	int N;			//Ì¨½×Êý
	while (cin >> N)
	{
		cout << f(N)<<endl;
	}
	system("pause");
	return 0;
}