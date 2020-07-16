#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j>0&&(i-j)<m;j--)
			cout<<char('A'+j);
		for(j=0;j<(m-i);j++)
		{
			cout<<char('A'+j);
		}
		cout<<endl;
	}
	system("pause");
	return 0;
} 
