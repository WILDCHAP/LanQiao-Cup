#include<iostream>
using namespace std;

int main()
{
	char a[8000];int n,i,tag,sinum=0,t=0,j,z;cin>>n>>a;
	char k;
	i=0;j=n-1;
	while(i<j)
	{
		tag=j;
		while(a[i]!=a[tag])	
		tag--;
		if(i==tag)
		{
			sinum++;
			if(sinum>1 || n%2==0)
			{
			cout<<"Impossible";return 0;
			}
			t+=(n/2)-i;
			/*k=a[i];
			for(z=i;z<(n/2);z++)
			{
				a[z]=a[z+1];
			}
			a[n/2]=k;*/i++;
			continue;
		}
		t+=(j-tag);
		k=a[tag];
		for(z=tag;z<j;z++)
		a[z]=a[z+1];
		a[j]=k;
		i++;j--;
	}
	cout<<t<<endl;
	return 0;
} 
