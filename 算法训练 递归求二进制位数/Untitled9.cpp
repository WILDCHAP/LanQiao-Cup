#include<iostream>
#include<stdlib.h>
using namespace std;

int f(int n)		//��ʮ����n�Ķ�����λ�� 
{
	if(n==1)
	return 1;
	if(n==0)
	return 0;
	return 1+f(n/2);
}

int main()
{
	int n;
	cin>>n;
	cout<<f(n); 
	system("pause");
	return 0;
}
