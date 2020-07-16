#include<iostream>
using namespace std;
int sum=0,avg;

void aa(int a[],int len)
{
	for(int i=0;i<len;i++)
	{sum+=a[i];
	}
	avg=sum/len;
}

int main()
{
	int a[1000],n,i;cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	aa(a,n);
	cout<<sum<<' '<<avg<<endl;
	return 0;
} 
