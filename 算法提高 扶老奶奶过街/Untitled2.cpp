#include<iostream>
#include<cstdio>
using namespace std;
int a[6];	//0:û�з� 1:֮����һ�˷������ 

int main()
{
	int i,j,ans;
	for(i=1;i<=5;i++)	//ö��������� 
	{
		ans=0;a[i]=1;
		if(!a[1]&&!a[5])	//A
		ans++;
		if(a[3]||a[5])		//B
		ans++;
		if(a[3]||a[4])		//C
		ans++;
		if(!a[2]&&!a[3])	//D
		ans++;
		if(!a[5])			//E
		ans++;
		if(ans==2)
		{
			printf("%c ",64+i);
		}
		a[i]=0;
	}
	return 0;
}
