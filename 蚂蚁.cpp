/*标题：蚂蚁感冒

    长100厘米的细长直杆子上有n只蚂蚁。它们的头有的朝左，有的朝右。 

    每只蚂蚁都只能沿着杆子向前爬，速度是1厘米/秒。

    当两只蚂蚁碰面时，它们会同时掉头往相反的方向爬行。

    这些蚂蚁中，有1只蚂蚁感冒了。并且在和其它蚂蚁碰面时，会把感冒传染给碰到的蚂蚁。

    请你计算，当所有蚂蚁都爬离杆子时，有多少只蚂蚁患上了感冒。


【数据格式】

    第一行输入一个整数n (1 < n < 50), 表示蚂蚁的总数。

    接着的一行是n个用空格分开的整数 Xi (-100 < Xi < 100), Xi的绝对值，表示蚂蚁离开杆子左边端点的距离。正值表示头朝右，
	负值表示头朝左，数据中不会出现0值，也不会出现两只蚂蚁占用同一位置。其中，第一个数据代表的蚂蚁感冒了。

    要求输出1个整数，表示最后感冒蚂蚁的数目。

例如，输入：
3
5 -2 8
程序应输出：
1

再例如，输入：
5
-10 8 -20 12 25
程序应输出：
3
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int N,c[100];
bool pd(int a[])
{
	for(int i=1;i<=N;i++)
		if(a[i]!=0 || a[i]!=100)
			return false;
	return true;
}

int pd2(int a[],int n)		//判断是否有碰头征兆，有返回碰头蚂蚁，没有返回0
{
	int i;
	if(a[n]>0)
	{
		for(i=1;i<=N;i++)
		{
			if(i==n || a[i]==0 || a[i]==100 || c[i]==1)
				continue;
			if(abs(a[n])<abs(a[i]) && a[i]<0 && (abs(a[i+1])-abs(a[i]))<=2)
				return i;
		}
	}
	return 0;
}

int main()
{
	int i,a[100],b[100];
	cin>>N;
	for(i=1;i<=N;i++)
	{
		cin>>a[i];b[i]=0;
	}
	b[1]=a[i];
	while(1)
	{
		if(pd(a))			//如果全部到了终点就退出
			break;
		for(i=1;i<=N;i++)			//记录此轮是否爬过
			c[i]=0;
		for(i=1;i<=N;i++)
		{
			if(!a[i] || a[i]==100 || c[i]==1)	//到了终点的不用爬了,或者之前判断过碰头的也不用爬了
				continue;
			int z=pd2(a,i);
			if(z)		//判断第i只蚂蚁周围是否有碰头现象
			{
				if((abs(a[z])-abs(a[i]))==2)
					a[z]++;a[i]++;
				a[i+1]=-1*a[i+1];a[i]=-1*a[i];
				c[i]=1;c[z]=1;
			}
			else
			{
				a[i]++;c[i]=1;
			}
		}
	}
	int sum=1;
	for(i=1;i<=N;i++)
		if(b[i]==1)
			sum++;
	cout<<sum<<endl;
	system("pause");
	return 0;
}