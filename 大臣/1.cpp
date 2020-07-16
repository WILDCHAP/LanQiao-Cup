#include<iostream>
#include<stdlib.h>
using namespace std;
int N,sumlen=0,len=0,eend=-1;
int city[100][100]={-1};	//记录两个城市之间的距离
int visted[100][100]={0};	//标记访问

int cup(int len)		//计算花费函数
{
	int spen=0;
	for(int x=1;x<=len;x++)
	{
		spen+=(x+10);
	}
	return spen;
}

void dfs(int k,int step)
{
	if(step>=N)
	{
		if(len>sumlen)
		{
			sumlen=len;		//取最长长度
			eend=k;		//记录尾节点
		}
		len=0;
	}
	for(int i=1;i<=N;i++)
	{
		if(visted[k][i]==1 || city[k][i]==-1)	//如果下一个要去的城市已经经过
			continue;
		len=len+city[k][i];	//计算长度
		visted[i][k]=visted[k][i]=1;	//标记经过
		dfs(i,step+1);
		len=len-city[k][i];
		visted[i][k]=visted[k][i]=0;	//回溯
	}
}

int main()
{
	cin>>N;
	int n,m,q,lon=0,beg,end;
	for(int i=0;i<(N-1);i++)
	{
		cin>>n>>m>>q;
		city[n][m]=city[m][n]=q;
	}
	for(i=1;i<=N;i++)
	{
		for(int j=0;j<=N;j++)
			for(int x=0;x<=N;x++)
				visted[j][x]=0;
		sumlen=0;
		len=0;
		dfs(i,0);
		if(sumlen>lon)
		{
			lon=sumlen;
			beg=i;
			end=eend;
		}
	}
	cout<<"该大臣从城市"<<beg<<"到城市"<<end<<"花费最多："<<lon<<endl;
	system("pause");
	return 0;
}