#include<iostream>
#include<stdlib.h>
using namespace std;
int way=0;		//������ 
int K=0;		//��� 
void f(int m,int n)		//m����n���� 
{
	if(!m && !n)
		way++;
	if((m-1)>=0)
	{
		K++;
		f(m-1,n);		//���˻�
		K--; 
	}
	if((n-1)>=0 && K>0)
	{
		K--;
		f(m,n-1);		//������ 
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
