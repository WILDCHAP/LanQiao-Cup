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
	int k,w=0,p,q;  //k：有几组；i：行数；j：列数
	cout<<"请输入你要查询的池塘组数：";
	cin>>k;
	while(w!=k)
	{
		sum=0;
		cout<<"请输入行数和列数：";
		cin>>i>>j;
		cout<<"请输入池塘："<<endl;
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
		cout<<"池塘总数为："<<sum<<endl<<endl;
		w++;
	}
}