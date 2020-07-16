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
	for(i=1;i<=1000000;i++)	//100000´ò±í
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
#include<math.h>
#define MOD 50000
using namespace std;

bool pd(int n)
{
	for(int i=2;i<=(sqrt(n));i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

int main()
{
	int n,i=0,num=2,sum=1;
	cin>>n;
	while(i!=n)
	{
		if(pd(num))
		{
			i++;
			sum=(sum*num)%MOD;
		}
		num++;
	}
	cout<<sum<<endl;
	return 0;
} 
