#include<iostream>
using namespace std;

void KP(int a[],int left,int right)
{
	if(left<right)
	{
		a[0]=a[left];int i=left,j=right;
		do
		{
			while(a[j]>a[0] && i<j)	j--;
			if(i<j)
			{
				a[i]=a[j];i++;
			}
			while(a[i]<a[0] && i<j)	i++;
			if(i<j)
			{
				a[j]=a[i];j--;
			}
		}while(i!=j);
		a[i]=a[0];
		KP(a,left,i-1);
		KP(a,i+1,right);
	}
}

int main()
{
	int n,a[1001],b[1001][20],i,j,sum=0;	//n输入组数 a[]每组元素的个数
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		for(j=1;j<=(2*a[i]);j++)
			cin>>b[i][j];
	}
	for(i=1;i<=n;i++)
	{
		sum=0;
		KP(b[i],1,a[i]);KP(b[i],a[i]+1,2*a[i]);
		for(j=1;j<=a[i];j++)
		{
		sum+=b[i][j]*b[i][2*a[i]-j+1];
	//	cout<<b[i][j]<<'*'<<b[i][2*a[i]-j+1]<<endl;
		}
		cout<<sum<<endl;
	}
	return 0;
}