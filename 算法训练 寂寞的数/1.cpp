#include<iostream>
#include<cstring>
using namespace std;
int len;
void ch(char a[],int n)
{
	int t=n/10;
	if(t)	
	ch(a,t);
	a[len++]='0'+n%10;
}

bool pd(int n)	//判断n是不是寂寞的数
{
	int i,k=0,j;char a[6];
	for(i=1;i<=n;i++)
	{
		k=0;len=0;
		ch(a,i);	//将n转换成字符
		for(j=0;j<len;j++)
			k+=a[j]-'0';
		k+=i;
		if(k==n)
			return false;
	}
	return true;
}

int main()
{
	int n,i;cin>>n;
	for(i=1;i<=n;i++)
	{
		if(pd(i))
			cout<<i<<endl;
	}
	return 0;
}