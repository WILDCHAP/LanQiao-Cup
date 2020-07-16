#include<iostream>
#include<cmath>
using namespace std;
int mouth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int yy,mm,dd;
int day=0,k=0,i;
bool pd(int n)
{
	if((n%4==0&&n%100!=0)||(n%400==0))return true;
	return false;
}

void a()
{
	if(yy==2011)
	{
		if(mm==12)day+=19+dd;
		else day+=dd-11;
	} 
	else
	{
		for(i=2012;i<yy;i++)
		{
			if(pd(i))k++;
		}
		day+=(yy-2011-1)*365+k;		//中间间隔的整年差 
		for(i=1;i<mm;i++)
		{
			day+=mouth[i];
		}
		day+=dd;
		if(pd(yy)&&mm>2)
		day++;
		day+=50;
	}
	int zz=((day)%7+5)%7;
	if(!zz)cout<<7;
	else
	cout<<zz;
}

void b()
{
	if(yy==2011)
	{
		if(mm==11)day+=11-dd;
		else
		{
			for(i=1;i<mm;i++)day+=mouth[i];
			day+=dd;
			day=315-day;
		}
	} 
	else
	{
		for(i=(yy+1);i<2011;i++)
		{
			if(pd(i))k++;
		}
		day+=(2011-yy-1)*365+k;		//中间间隔的整年差 
		for(i=12;i>mm;i--)
		{
			day+=mouth[i];
		}
		day+=mouth[mm]-dd;
		if(pd(yy)&&mm<=2)
		day++;
		day+=315;
	}day=(5-day%7)>0?(5-day%7):-1*(5-day%7);
	if(!day)cout<<7;
	else
	cout<<day;
}

int main()
{
	cin>>yy>>mm>>dd;
	if(yy>2011||(yy==2011&&mm==12)||(yy==2011&&mm==11&&dd>=11))
	a();
	else
	b();
	return 0;
}
