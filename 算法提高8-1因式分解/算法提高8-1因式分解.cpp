#include<iostream>
#include<math.h>
using namespace std;

bool pd(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)return false;
	return true;
}

int main()
{
	int n,i;cin>>n;bool tag=false;
	while(n!=1)
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0 && pd(i))
			{
				if(tag)	cout<<'*';
				else tag=true;
				cout<<i;
				n=n/i;
				break;
			}
		}
	}
	return 0;
}
