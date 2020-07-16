/*#include<iostream>
#define MOD 50000
using namespace std;

int main()
{
	bool ss[1000000];
	int i,j,n,k=1,a[100001];long long num=1;
	for(i=0;i<=1000000;i++)
		ss[i]=true;
	ss[0]=ss[1]=false;
	for(i=0;i<=1000000;i++)
	{
		if(ss[i])
		{
			for(j=2*i;j<=1000000;j=j+i)
				ss[j]=false;
		}
	}
	for(i=1;i<=1000000;i++)	//100000打表
	{
		if(ss[i])
		{
			a[k++]=i%MOD;
			if(k==100001)
				break;
		}
	}
	cin>>n;
	for(i=1;i<=n;i++)
		num*=a[i];
	cout<<num<<endl;
	return 0;
}*/


#include<iostream>
#define MOD 50000
using namespace std;

int main()
{
	int ss[1000];
	int i,j,n,k=1,a[100],num=1;
	for(i=0;i<=10000;i++)
		ss[i]=1;
	ss[0]=ss[1]=0;
	for(i=0;i<=1000;i++)
	{
		if(ss[i])
		{
			for(j=2*i;j<=1000;j=j+i)
				ss[j]=0;
		}
	}
	for(i=1;i<=1000;i++)	//100000打表
	{
		if(ss[i])
		{
			a[k++]=i%MOD;
			if(k==101)
				break;
		}
	}
	cin>>n;
	for(i=1;i<=n;i++)
		num*=a[i];
	cout<<num<<endl;
	return 0;
}
