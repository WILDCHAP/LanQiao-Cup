#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
char a[30];			//���봮
char b[30];			//��Ų��ظ�������

bool pd(int n)
{
	for(int i=0;i<strlen(b);i++)
	{
		if(b[i]==a[n])
			return true;
	}
	return false;
}

void select()
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(!pd(i))
		{
			b[strlen(b)]=a[i];			//���b�����в�����a[i]���ֵ�Ļ����ʹ���
		}
	}
}

void px(int i,int j,int k)
{
	char ch;
	if(b[i]>b[j])
	{
		ch=b[i];b[i]=b[j];b[j]=ch;
	}
	if(b[j]>b[k])
	{
		ch=b[j];b[j]=b[k];b[k]=ch;
	}
	if(b[i]>b[j])
	{
		ch=b[i];b[i]=b[j];b[j]=ch;
	}
}

void pl()
{
	for(int i=0;i<strlen(b)-2;i++)
		for(int j=i+1;j<strlen(b)-1;j++)
			for(int k=j+1;k<strlen(b);k++)
			{
				px(i,j,k);
				cout<<b[i]<<b[j]<<b[k]<<endl;
			}
}

int main()
{
	while(cin>>a)
	{
		select();			//��a��ȡ�����в��ظ�����ĸ��b
		pl();				//�漴���к����
	}
	system("pause");
	return 0;
}