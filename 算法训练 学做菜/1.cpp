#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,a1=0,b1=0,c1=0,d1=0,e1=0;
	cin>>a>>b>>c>>d;int i;
	for(i=1;;i++)			//A
	{
		if(a>=2&&b>=1&&d>=2)
		{
			a-=2;b-=1;d-=2;
			a1++;
		}
		else
			break;
	}
	for(i=1;;i++)		//B
	{
		if(a>=1&&b>=1&&c>=1&&d>=1)
		{
			a-=1;b-=1;c-=1;d-=1;
			b1++;
		}
		else
			break;
	}
	for(i=1;;i++)		//C
	{
		if(c>=2&&d>=1)
		{
			c-=2;d-=1;
			c1++;
		}
		else
			break;
	}
	for(i=1;;i++)		//D
	{
		if(b>=3)
		{
			b-=3;
			d1++;
		}
		else
			break;
	}
	for(i=1;;i++)		//E
	{
		if(a>=1&&d>=1)
		{
			a-=1;d-=1;
			e1++;
		}
		else
			break;
	}
	cout<<a1<<endl<<b1<<endl<<c1<<endl<<d1<<endl<<e1<<endl;
	return 0;
}