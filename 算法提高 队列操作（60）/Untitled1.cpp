#include<iostream>
using namespace std;
typedef struct{
	int data[51];
	int front,rear;
}queue; 
int weishu(int n)
{	
	int i=0;
	while(n)
	{
		n/=10;i++;
	}
	return i;
}
int main()
{
	queue a;a.front=a.rear=0;
	int n;cin>>n;int i,k[51];char b[51][100];
	for(i=1;i<=n;i++)
	{
		cin>>k[i];
		if(k[i]==1)
		{cin>>a.data[a.rear++];
		}
		else if(k[i]==2)
		{
			if(a.front==a.rear){b[i][0]='n';b[i][1]='o';b[i][2]='\0';}
			else
			{	int z=a.data[a.front++],j=weishu(z)-1;b[i][weishu(z)]='\0';
				if(!z){b[i][0]='0';b[i][1]='\0';}
				while(z)
				{
					b[i][j--]='0'+z%10;
					z/=10;
				}
			}
		}
		else if(k[i]==3)
		{
			int o=a.rear-a.front,l=weishu(o)-1;b[i][weishu(o)]='\0';
			if(!o){b[i][0]='0';b[i][1]='\0';}
			while(o)
			{
				b[i][l--]='0'+o%10;
				o/=10;
			}
		}
	}
	for(i=1;i<=n;i++)
	if(k[i]!=1)cout<<b[i]<<endl;
	return 0;
} 
