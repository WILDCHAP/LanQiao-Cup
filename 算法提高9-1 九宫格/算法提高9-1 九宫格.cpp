#include<iostream>
using namespace std;

int main()
{
	int a[3][3],i,j;bool tag=true;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>a[i][j];
	int hang=a[0][0]+a[0][1]+a[0][2],zz=0;
	int lie=a[0][0]+a[1][0]+a[2][0],b[3];
	int xie=a[0][0]+a[1][1]+a[2][2],c=0;
	b[0]=b[1]=b[2]=0;
	for(i=0;i<3;i++)
	{
		zz=0;
		for(j=0;j<3;j++)
		{
			zz+=a[i][j];
			b[j]+=a[i][j];
			if((i+j)==2)
			c+=a[i][j];
		}
		if(zz!=hang)
		{
			cout<<0;return 0;
		}
	}
	for(i=0;i<3;i++)
	if(b[i]!=lie || xie!=c)
	{
		cout<<0;return 0;
	}
	cout<<1;
	return 0;
}
