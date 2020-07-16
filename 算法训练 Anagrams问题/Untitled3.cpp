#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int k[100];

int cx(char ch,char b[])
{
	int z;
	if(ch>='a' && ch<='z')
	z=32;
	else
	z=-32;
	for(int i=0;i<strlen(b);i++)
	{
		
		if((ch==b[i] || ch==(b[i]+z)) && k[i]==0)
		{
			k[i]=1;
			return 1;
		}
	}
	return 0;
}

bool pd(char a[],char b[])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(!cx(a[i],b))	
			return false; 
	}
	return true;
}

int main()
{
	char a[100],b[100];
	cin>>a>>b;
	for(int i=0;i<100;i++)
	k[i]=0;
	if(pd(a,b))
	cout<<"Y";
	else
	cout<<"N";
	return 0;
}
