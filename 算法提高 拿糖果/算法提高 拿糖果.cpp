#include<iostream>
#include<math.h>
//#define max((a),(b)) (a)>(b)?(a):(b)
using namespace std;
int dp[101];
bool isprim(int n)		//�ж����� 
{
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)return false;
	return true;
} 
int main()
{
	int n,i,j;cin>>n;dp[0]=dp[1]=dp[2]=dp[3]=0;
	for(i=4;i<=n;i++)	//j��ʾ��ǰ�ǹ���dp[i]��ʾ��i���ǹ�ʱ������ö��ٸ� 
	{
		for(j=2;j<=sqrt(i);j++)	//�ҳ�С�ڸ���i��������
		{
			if(!isprim(j)||i%j!=0)
			continue;
			dp[i]=dp[i]>j+dp[i-2*j]?dp[i]:j+dp[i-2*j];
		}
	}
	cout<<dp[n];
	return 0;
}
