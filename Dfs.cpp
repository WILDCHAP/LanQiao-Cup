#include<iostream>
#include<stdlib.h>
using namespace std;
char a[100][100];
int sum,i,j;

void D(int x,int y)
{
	if(x>=0 && x<i && y>=0 && y<j && a[x][y]=='1')
	{
		a[x][y]='0';
		D(x-1,y);D(x+1,y);
		D(x,y-1);D(x,y+1);
	}
}

int main()
{
	int k,w=0,p,q;  //k���м��飻i��������j������
	cout<<"��������Ҫ��ѯ�ĳ���������";
	cin>>k;
	while(w!=k)
	{
		sum=0;
		cout<<"������������������";
		cin>>i>>j;
		cout<<"�����������"<<endl;
		for(p=0;p<i;p++)
		{
			for(q=0;q<j;q++)
			{
				cin>>a[p][q];
			}
		}
		for(p=0;p<i;p++)
		{
			for(q=0;q<j;q++)
			{
				if(a[p][q]=='1')
				{
					D(p,q);sum++;
				}
			}
		}
		cout<<"��������Ϊ��"<<sum<<endl<<endl;
		w++;
	}
}