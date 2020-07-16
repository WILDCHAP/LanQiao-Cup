#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;


int main()
{
	int n;
	char a[20][10000]={'0'};
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int k=0;
		for(int j=0;j<strlen(a[i-1]);j++)
		{
			if(a[i-1][j]=='0')
			a[i][k++]='1';
			else
			{
				a[i][k++]='0';
				a[i][k++]='1';
			}
		}
		a[i][k]='\0';
	}
	cout<<a[n]; 
	system("pause");
	return 0;
} 
