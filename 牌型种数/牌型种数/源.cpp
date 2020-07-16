#include<iostream>
#include<stdlib.h>
using namespace  std;

int ans = 0,sum=0;

/*void dfs(int n)
{
	if (n > 13)  //如果牌超出范围
		return;
	if (n == 13)   //如果已经到了最后一种牌
	{
		if(sum==13)   //如果牌的总数为13，则证明多了种情况
			ans++;
		return;
	}
	for(int i=0;i<=4;i++)  //一张牌的情况有0，1，2，3，4
	{
		sum = sum + i; //一张牌多一种情况，所有牌的总数就加一
		dfs(n + 1);   //从下一张牌开始深搜
		sum = sum - i;//深搜完毕
	}
}*/

void dfs(int type, int sum)  //type牌类型，sum牌总数
{
	if (sum > 13)  //如果牌的总数大于13，则放弃此布深搜
		return;    
	if (type == 13)
	{
		if (sum == 13)   //如果当前满足（1.牌的总数为13。2.牌深搜到了最后一种牌）如果牌总数没到又到了最后一种牌，同样放弃
			ans++;
		return;
	}
	for (int i = 0; i <= 4; i++)
	{
		dfs(type + 1, sum + i);  //每次牌的种类向前，但是一种牌最多有i（4）张
	}
}

int main()
{
	dfs(0,0);
	cout << ans << endl;
	system("pause");
	return 0;
}