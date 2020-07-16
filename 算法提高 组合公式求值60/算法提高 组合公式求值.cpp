#include<iostream>
#include<cmath>
#define MOD 987654321
using namespace std;

long long C(int m,int n)
{
	if(!m || m==n)return 1;
	else
	return (C(m-1,n-1)%MOD+C(m,n-1)%MOD)%MOD;
}

int main()
{
	int m,n,i;cin>>n>>m;
	long long sum=0;
	for(i=0;i<=n;i++)
	{
		sum=(sum%MOD+(C(m,n)*C(i,n)*(int)pow(i,3)%MOD)%MOD)%MOD;
	}
	cout<<sum;
	return 0;
}
