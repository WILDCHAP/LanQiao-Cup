#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(b<c)
	swap(&b,&c);
	if(a<b)
	swap(&a,&b);
	if(b<c)
	swap(&b,&c);
	cout<<a<<' '<<b<<' '<<c;
	system("pause");
	return 0;
} 
