#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	if ((N - 3) % 2)
		cout << (N - 4)*(N - 3)*(N - 2) << endl;
	else
		cout<< (N - 3)*(N - 2)*(N - 1) << endl;
	system("pause");
	return 0;
}