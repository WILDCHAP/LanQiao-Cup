#include<iostream>
using namespace std;
int num[16],i,max1,n,m;
void f(int chengji,int now,int sum)	//chengji��ǰ�˻���now��ǰ�ڼ������֣�sum��ǰѡ���˶��ٸ����� 
{
	if(sum==m)		//ѡ��m������ 
	{
		if(max1<chengji)
		max1=chengji;
		return ;
	}
	if(now>n)	//����С�곬�� 
	return ;
	f(chengji*num[now],now+1,sum+1);	//ѡ��ѡ
	f(chengji,now+1,sum); 
}

int main()
{
	int N,b[100],k=0;cin>>N;
	while(N)
	{
		cin>>n>>m;
		for(i=1;i<=n;i++)cin>>num[i];
		max1=-9999;
		f(1,1,0);
		b[k++]=max1;
		N--;
	} 
	for(int i=0;i<k;i++)cout<<b[i]<<endl;
	return 0;
}
