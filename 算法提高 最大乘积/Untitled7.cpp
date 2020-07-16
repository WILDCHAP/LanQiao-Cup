#include<iostream>
using namespace std;
int num[16],i,max1,n,m;
void f(int chengji,int now,int sum)	//chengji当前乘积，now当前第几个数字，sum当前选择了多少个数字 
{
	if(sum==m)		//选了m个数字 
	{
		if(max1<chengji)
		max1=chengji;
		return ;
	}
	if(now>n)	//数字小标超过 
	return ;
	f(chengji*num[now],now+1,sum+1);	//选或不选
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
