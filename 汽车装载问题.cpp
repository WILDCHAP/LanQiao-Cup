/*1.̰��*/
/*#include<iostream>
using namespace std;
int n,a[200],w;	//n������ ÿ����Ʒ����a[i](�Ӵ�С) ����w
void f(int x,int now)	//��ʣx���أ����ڵ���nowԪ��
{
	if(x<=0 || (now==n && x<a[n])) return ; 
	if(x>=a[now])
	{
		cout<<a[now]<<' ';f(x-a[now],now+1); 
	} 
	else
	f(x,now+1); 
} 

int main()
{
	cin>>n>>w;int i;
	for(i=1;i<=n;i++)cin>>a[i]; 
	f(w,1); 
	return 0;
}*/ 

/*����4 10 8 3 3 3
���8*/

/*��̬�滮*/ 
#include<iostream>
using namespace std;
int n,a[200],w;	//n������ ÿ����Ʒ����a[i](�Ӵ�С) ����w
int main()
{
	cin>>n>>w;
	int i,j,k,dp[200][200],vist[200];		//dp[i]��ʾ��i����Ʒ�����������ֵ 
	for(i=1;i<=n;i++){cin>>a[i];vist[i]=0;} 
	dp[0][0]=0; 
	for(i=1;i<=n;i++)		//�ӵ�һ����Ʒ����n����Ʒ 
	{
		for(k=1;k<=n;k++)	//�˴�ѡ�����Ʒ 
		{
			if(vist[k])continue;
			vist[k]=1;		//��Ǹ���Ʒʹ��
			for(j=0;j<=w;j++)	//���ѡ������� 
			{
				if(j>a[k])			//ֻ����һ��ѡ���˲���
				{
					dp[i][j]=(dp[i-1][j-a[k]]+a[k])>dp[i-1][j]?(dp[i-1][j-a[k]]+a[k]):dp[i-1][j]; 
				}
				else
				dp[i][j]=dp[i-1][j]; 
			}
		} 
	}
	cout<<dp[1][w]<<endl; 
	return 0; 
}



