#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
bool tag=false;
void f(int n)		//n表示要分解的数
{
	int i,num[50],top=0,b[50],k=1;
	while(n)
	{
		num[top++]=n%2;
		n=n/2;
	}
	for(i=0;i<top;i++)
	{
		if(num[i])
		{
			b[k++]=i;
		}
	}
	for(i=k-1;i>0;i--)
	{
		cout<<"2";
		if(b[i]==1)
		{
			if(i!=1)
			cout<<"+";
		}
		else if(b[i]==0)
		{
			cout<<"(0)";
		}
		else
		{
			cout<<"(";
			f(b[i]);
			cout<<")";
			if(i!=1)
			cout<<"+";
		}
	}
} 

int main()
{
	int n;
	cin>>n;
	f(n); 
	system("pause");
	return 0;
}
