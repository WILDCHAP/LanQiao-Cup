#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int year;
	cin >> year;
	char* x[] = { "��","��","��","��","��","��","��","��","��","��" };
	char* y[] = { "��","��","��","î","��","��","��","δ","��","��","��","��" };
	int n = year - 1984;
	while (n<0) n += 60;
	printf("%s%s\n", x[n%10], y[n%12]);
	system("pause");
	return 0;
}