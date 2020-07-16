#include<iostream>
#include<math.h>
using namespace std;

bool pd(int n)
{
	if(n<2)return false; 			//!!一开始的错误所在 
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)return false;
	return true;
}

int main()
{
	int l,r,ans=0;cin>>l>>r;
	for(int a=0;a<3;a++)
	for(int b=0;b<3;b++)
	for(int c=0;c<3;c++)
	for(int d=0;d<3;d++)
	for(int e=0;e<3;e++)
	for(int f=0;f<3;f++)
	{
		int sum=a+b+c+d+e+f;
		if((sum>=l&&sum<=r)||pd(sum))ans++;
	}
	cout<<ans;
	return 0;
} 
