#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j,x,y,t,z,a[200][200];
	cin>>r>>c;
	bool tag; 
	for(i=1;i<=r;i++)
	for(j=1;j<=c;j++)
	cin>>a[i][j];
	int wigth=1;	//³õÊ¼¿í¶ÈÎª1
	for(i=1;i<=(r-wigth+1);i++)
	for(j=1;j<=(c-wigth+1);j++)
	{
		t=1; z=a[i][j]; tag=true; 
		while(t<=(r-wigth+1)&&t<=(c-wigth+1))
		{
			for(x=0;x<=t;x++)
			for(y=0;y<=t;y++)
			if(a[i+x][j+y]!= z)
			{ 
				tag=false; break;
			}
			if(!tag)
			{
				if(t>wigth)
				wigth=t;
				break;
			} 
			t++; 
		}  
	} 
	cout<<wigth*wigth; 
	return 0;
}
