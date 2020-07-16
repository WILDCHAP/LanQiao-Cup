#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		char ch[100];
		for(j=0;j<((2*n-1)/2-i+1);j++) 
		ch[j]=' ';
		ch[j]='\0';
		printf("%s",ch);
		for(j=1;j<=(2*i-1);j++)
		printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}
