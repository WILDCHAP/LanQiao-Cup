#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;cin>>n;
	int i,j;
	for(i=n/2;i>=2;i--)
	{
		if(i%2==0 && n%i==(i/2) && ((n/i)-i/2+1)>0)
			cout<<(n/i)-i/2+1<<' '<<(n/i)+i/2<<endl;
		if(i%2!=0 && n%i==0 &&((n/i)-i/2)>0)
			cout<<(n/i)-i/2<<' '<<(n/i)+i/2<<endl;
	}
	return 0;
}