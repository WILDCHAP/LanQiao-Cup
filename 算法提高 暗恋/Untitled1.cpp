#include<iostream>
using namespace std;
/*算法提高 暗恋（二维数组）*/
int a[200][200];
int f(int a,int b,int now)
{
	int ans=0;
	if(a[a])
	return ans;
}
int main()
{
	int R,C;cin>>R>>C;
	int i,j;
	for(i=1;i<=R;i++)
	for(j=1;j<=C;j++)
	cin>>a[i][j];
	int MAX=0;
	for(i=1;i<=R;i++)
	for(j=1;j<=C;j++)
	{
		int t=f(i,j,1);
		if(MAX<t)
		MAX=t;
	}
	cout<<MAX; 
	return 0;
}
