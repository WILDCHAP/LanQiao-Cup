#include<iostream>
#include<string.h>
using namespace std;

void encryptchar(char a[])
{
	int len=strlen(a),i;
	for(i=0;i<len;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			if(a[i]=='Z')a[i]='a';
			else	a[i]=a[i]+1;
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			if(a[i]=='z')a[i]='A';
			else	a[i]=a[i]+1;
		}
	}
}

int main()
{
	char a[51];cin>>a;
	encryptchar(a);
	cout<<a;
	return 0;
}
