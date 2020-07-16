#include<iostream>
using namespace std;

int main()
{
	int n,m;cin>>n>>m;
	int t,a[10],i;	//a[i]:第i个猴子拿完后所剩的苹果数目(开始a[0],第二天一早a[n]) 
	for(t=0;;t++)	//t为第二天一份苹果数目 
	{
		a[n]=t*n+m;		//第二天一早所剩的苹果数
		for(i=n;i>=1;i--)	//从第n只猴子到第一只猴子 
		{
			if((n*a[i])%(n-1)==0)		//所推公式 a[i]=a[i-1]-(a[i-1]-m)/n-m 除过去只有整除时才能保证每天数目为整数
			{								/*重点:用(a[i-1]-m)/n代替a[i-1]/n*/
				a[i-1]=(n*a[i])/(n-1)+m;
			} 
			else			//如果不能整除，证明上一个a[i]有问题；则为开始的a[n]有问题 
			break;
		} 
		if(!i)
			break;
	}
	cout<<a[0];
	return 0;
} 
