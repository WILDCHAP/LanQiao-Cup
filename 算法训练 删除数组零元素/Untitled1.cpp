#include<iostream>
using namespace std;

int aa(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(!a[i])
		{
			for(int j=i+1;j<n;j++)
			a[j-1]=a[j];
			n--;i--;
		}	
	}
	return n;
}

int main()
{
	int a[100],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];int k=aa(a,n);
	cout<<k<<endl;
	for(i=0;i<k;i++)
	cout<<a[i]<<' ';
	return 0;
} 
