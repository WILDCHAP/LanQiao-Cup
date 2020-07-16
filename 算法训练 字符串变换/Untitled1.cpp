#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

int mian()
{
	int n,i;
	char a[200],b[200];
	cin>>n>>a;
	switch(n)
	{
		case 1:
			for(i=0;i<strlen(a);i++)
			{
				if(a[i]>='a' && a[i]<='z')
				b[i]=a[i]-32;
				else
				b[i]=a[i];
			}
			b[strlen(a)]='\0';
			break;
		case 2:
			for(i=0;i<strlen(a);i++)
			{
				if(a[i]>='A' && a[i]<='Z')
				b[i]=a[i]+32;
				else
				b[i]=a[i];
			}
			b[strlen(a)]='\0';
			break;
		case 3:
			for(i=0;i<strlen(a);i++)
				b[strlen(a)-i-1]=a[i];
			b[strlen(a)]='\0';
			break;
		case 4:
			for(i=0;i<strlen(a);i++)
			{
				if(a[i]>='a' && a[i]<='z')
				b[i]=a[i]-32;
				else
				b[i]=a[i]+32;
			}
			b[strlen(a)]='\0';
			break;
		case 5:
			for(i=0;i<strlen(a);i++)
			{
				if(a[i]>='A' && a[i]<='Z')
				b[i]=a[i]+32;
				else
				b[i]=a[i];
			}
			b[strlen(a)]='\0';
			i=0;
			while(i<strlen(b)-1)
			{
				if(abs(b[i+1]-b[i])!=1)
				i++;
				else
				{
					int j=i+1;
					while(abs(b[j+1]-b[j])==1 && j<strlen(b)-1) j++;
					for(int z=j;z>(i+1);z--)
					b[z-1]=b[z];
					b[i+1]='-';
					i=j+1;
				}
			}
			break;
	}
	cout<<b;
	system("pause");
	return 0;
}
