#include<iostream>
#include<stdlib.h>
using namespace std;
int N,sumlen=0,len=0,eend=-1;
int city[100][100]={-1};	//��¼��������֮��ľ���
int visted[100][100]={0};	//��Ƿ���

int cup(int len)		//���㻨�Ѻ���
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
			sumlen=len;		//ȡ�����
			eend=k;		//��¼β�ڵ�
		}
		len=0;
	}
	for(int i=1;i<=N;i++)
	{
		if(visted[k][i]==1 || city[k][i]==-1)	//�����һ��Ҫȥ�ĳ����Ѿ�����
			continue;
		len=len+city[k][i];	//���㳤��
		visted[i][k]=visted[k][i]=1;	//��Ǿ���
		dfs(i,step+1);
		len=len-city[k][i];
		visted[i][k]=visted[k][i]=0;	//����
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
	cout<<"�ô󳼴ӳ���"<<beg<<"������"<<end<<"������ࣺ"<<lon<<endl;
	system("pause");
	return 0;
}