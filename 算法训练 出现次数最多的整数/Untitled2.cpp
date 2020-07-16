#include<iostream>
using namespace std;

int main()
{
	int n,a[21],i,k=0,max=0;
	cin>>n;
	if(n<1)
	return 0;
	i=1;
	while(i<=n)
	{
		cin>>a[i];
		if(i==1)
		a[0]=a[1];
		if(i>=2 && a[i]==a[i-1])
		{
			k=0;
			while(a[i]==a[i-1] && i<=n)
			{
				k++;i++;
				cin>>a[i];
			}
			if(k>max)
			{
				a[0]=a[i-1];
				max=k;
			}
		}
		i++;
	}
	cout<<a[0];
	return 0;
}
