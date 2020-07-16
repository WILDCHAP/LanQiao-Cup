#include<iostream>
#include<cstring>
using namespace std;
char a[100];
void f(int star,int step)
{
	cout<<a[star];
	if((star+step)>=strlen(a))
	return;
	f(star+step,step);
}
int main()
{
	int star,step;
	cin>>a>>star>>step;
	f(star,step);
	return 0;
} 
