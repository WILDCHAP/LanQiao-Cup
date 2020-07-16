#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[61],b[61][60];int l,i=0,j,max=0,k=0;
	cin>>l>>a;int len=strlen(a);
	for(i=0;i<(len-l);i++)
	{
		char c[60];
		for(j=0;j<l;j++)
		c[j]=a[j+i];
		c[j]='\0';
		strcpy(b[k++],c);
	}
	int num[61];char c[60];
	for(i=0;i<k;i++)
	{
		num[i]=0;
		for(j=i+1;j<k;j++)
			if(!strcmp(b[i],b[j]))
			{
				num[i]++;
			}
	}
	int tag;
	for(i=0;i<k;i++)
	{
		if(max<num[i])
		{
			max=num[i];tag=i;
		}
	}
	cout<<b[tag];
	return 0;
}
