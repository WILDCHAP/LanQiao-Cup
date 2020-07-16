#include<iostream>
#include<cstdio>
using namespace std;
char a[10];
void f(int n)
{
	int t=n/10;
	if(t)
	f(t);
	putchar('0'+n%10);
}
int main()
{
	int n;cin>>n;
	f(n);
	cout<<a;
	return 0;
}
