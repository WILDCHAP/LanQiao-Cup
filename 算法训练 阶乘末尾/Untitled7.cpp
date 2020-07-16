#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,len,i,j,num[100],t=0;
	cin>>n>>len;
	//char a[100];
	for(i=1;i<=len;i++)
	num[i]=0;
	num[1]=1; 
	for(i=2;i<=n;i++)
	{
		t=0;
		for(j=1;j<=len;j++)
		{
			num[j]=num[j]*i+t;
			t=num[j]/10;
			num[j]=num[j]%10;
		}
	}
	for(i=len;i>=1;i--)
		cout<<num[i];
	system("pause");
	return 0;
}
