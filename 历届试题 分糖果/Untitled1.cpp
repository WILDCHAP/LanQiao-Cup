#include<iostream>
using namespace std;
int n,a[101],t=0;
bool pd()
{
	for(int i=2;i<=n;i++)
	{
		if(a[i]!=a[i-1])
		return false;
	}
	return true;
}

void f()
{
	if(pd())		//每个人糖果数相同 
	return ;
	int i,b[101];
	for(i=1;i<=n;i++)
	{
		if(a[i]%2!=0)		//奇数发糖 
		{a[i]++;t++;
		}
		b[i]=a[i];
	}
	for(i=n;i>0;i--)
	{
		a[i]=a[i]/2;
	}
	for(i=n;i>0;i--)
	{
		if(i==n)
			a[i]+=b[1]/2;
		else
			a[i]+=b[i+1]/2;
	}
	f();
}

int main()
{
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	cin>>a[i];
	f();
	cout<<t<<endl;
	return 0;
} 
