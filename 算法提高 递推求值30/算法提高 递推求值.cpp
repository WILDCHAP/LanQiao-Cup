#include<iostream>
#include<cmath> 
#define MOD 99999999
using namespace std;

int main()
{
	long long n,i,f[5][3];cin>>n; 
	f[1][1]=2;f[1][2]=3;f[2][1]=1;
	f[2][2]=4;f[3][1]=6;f[3][2]=5;
	for(i=4;i<=n;i++)
	{
		if(i%4==0)
		{
			f[4][1]=(f[3][2]%MOD+(2*f[1][1])%MOD+5)%MOD;
			f[4][2]=((f[3][1])%MOD+(3*f[1][1])%MOD+(2*f[1][2])%MOD+3)%MOD;
		}
		if(i%4==1)
		{
			f[1][1]=(f[4][2]%MOD+(2*f[2][1])%MOD+5)%MOD;
			f[1][2]=((f[4][1])%MOD+(3*f[2][1])%MOD+(2*f[2][2])%MOD+3)%MOD;
		}
		if(i%4==2)
		{
			f[2][1]=(f[1][2]%MOD+(2*f[3][1])%MOD+5)%MOD;
			f[2][2]=((f[1][1])%MOD+(3*f[3][1])%MOD+(2*f[3][2])%MOD+3)%MOD;
		}
		if(i%4==3)
		{
			f[3][1]=(f[2][2]%MOD+(2*f[4][1])%MOD+5)%MOD;
			f[3][2]=((f[2][1])%MOD+(3*f[4][1])%MOD+(2*f[4][2])%MOD+3)%MOD;
		}
	}
	f[0][1]=f[4][1];f[0][2]=f[4][2];
	cout<<f[n%4][1]<<endl<<f[n%4][2];
	return 0;
}
