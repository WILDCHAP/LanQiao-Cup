#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,m,i,num;
	cin>>n>>m;
	num=1;
	for(i=1;i<=m;i++)
	{
		num=num*n;
		printf("%12d",num);
		if(i%5==0)
		cout<<endl;
	} 
	system("pause");
	return 0;
} 
