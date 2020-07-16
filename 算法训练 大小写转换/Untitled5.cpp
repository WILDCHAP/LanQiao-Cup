#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[21];
	int i;cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		a[i]=a[i]+32;
		else if(a[i]>='a' && a[i]<='z')
		a[i]=a[i]-32;
		cout<<a[i];
	}
	return 0;
}
