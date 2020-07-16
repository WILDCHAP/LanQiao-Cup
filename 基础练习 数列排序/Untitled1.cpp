#include<iostream>
using namespace std;

void KP(int a[],int left,int right)
{
	if(left<right)
	{
		a[0]=a[left];
		int i=left,j=right;
		do
		{
			while(a[j]>a[0] && i<j)	j--;
			if(i<j)
			{
				a[i]=a[j];
				i++;
			}
			while(a[i]<a[0] && i<j)	i++;
			if(i<j)
			{
				a[j]=a[i];
				j--;
			}
		}while(i!=j);
		a[i]=a[0];
		KP(a,left,i-1);
		KP(a,i+1,right);
	}
}

int main()
{
	int n,a[201];
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	KP(a,1,n);
	for(int j=1;j<=n;j++)
	cout<<a[j]<<' ';
	return 0;
} 
