#include<iostream>
#include<stdlib.h>
using namespace std;
int way=0;		//方案数 
int K=0;		//库存 
void f(int m,int n)		//m个还n个租 
{
	if(!m && !n)
		way++;
	if((m-1)>=0)
	{
		K++;
		f(m-1,n);		//此人还
		K--; 
	}
	if((n-1)>=0 && K>0)
	{
		K--;
		f(m,n-1);		//此人租 
		K++;
	}
}

int main()
{
	int m,n;
	cin>>m>>n;
	f(m,n);
	cout<<way<<endl;
	system("pause");
	return 0;
}
