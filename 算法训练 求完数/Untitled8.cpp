#include<iostream>
#include<stdlib.h>
using namespace std;

bool ispre(int n)	//�ж�n�Ƿ�Ϊ���� 
{
	//�ֽ����� 
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	return true;
	else
	return false;
}
int main()
{
	for(int i=2;i<=9999;i++)
	{
		if(ispre(i))
		cout<<i<<endl;
	} 
	system("pause");
	return 0;
}
