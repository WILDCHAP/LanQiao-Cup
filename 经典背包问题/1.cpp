/*现在有很有物品，他们是可以分割的，我们知道他们每个物品单位重量的价值v和重量w*/
/*1<=v,w<=10 如果给你一个背包能容纳重量为m(10<=m<=20)*/
/*你所要做的就是把物品装到背包里，使背包里物品的价值总和最大*/
/*输入：s个物品，容量m，s个物品价值，s个物品重量*/ 
/*3 15
5 10
2 8
3 9*/ 
/*递归方法*/ 
/*#include<iostream>
using namespace std;
int s,m,a[11],b[11];//s个物体，背包重量m，a放物品价值，b放物品重量
int sum=0;			//储存价值
void KP(int left,int right)
{
	if(left<right)
	{
		b[0]=b[left];int i=left,j=right;
		do
		{
			while(b[j]>b[0]&&i<j)j--;
			if(i<j)
			{
				b[i]=b[j];
				i++;
			}
			while(b[i]<b[0]&&i<j)i++;
			if(i<j)
			{
				b[j]=b[i];
				j--;
			}
		}while(i!=j);
		b[i]=b[0];
		KP(left,i-1);
		KP(i+1,right);
	}
} 
int f(int n,int m)	//背包所剩重量为m时可以有的放n物品方式 (返回1:成功；0:失败) 
{
	if(!m)return 1;		//背包为空，分配成功
	if(m<0||(m>0&&n<1)) return 0;	//质量不对或没有剩物品了
	if(f(n-1,m-b[n])==1)
	{
		cout<<b[n]<<' ';return 1;
	}
	return f(n-1,m);	//如果当前物品放进去不能实现的话就跳过这个物品 
}
 
int main()
{
	cin>>s>>m;int i,j;
	for(i=1;i<=s;i++)cin>>b[i];
	KP(1,s);
	f(s,m); 	//从第s个物品开始放入容量为m的背包中 
	return 0;
} */

/*非递归方法*/
/*现在有很有物品，他们是可以分割的，我们知道他们每个物品单位重量的价值v和重量w*/
/*1<=v,w<=10 如果给你一个背包能容纳重量为m(10<=m<=20)*/
/*你所要做的就是把物品装到背包里，使背包里物品的价值总和最大*/
/*输入：s个物品，容量m，s个物品价值，s个物品重量*/ 
#include<iostream>
using namespace std;

int main()
{
	int n,m;	//n个人，重量m 
	int vis[50],sum=0;
	cin>>n>>m;int i,a[50];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];vis[i]=0;
	}
	int st[50],top=0;		//定义栈来记录走过的路径
	while(top!=-1)
	{
		for(i=1;i<=n;i++)
		{
			if(!vis[i] && sum+a[i]<=m)		//如果可以放的话 
			{
				sum+=a[i];
				st[top++]=a[i];		//将被选中的物品进栈
				vis[i]=1;			//标记使用过了 
				if(sum==m)					//找到了，出栈输出 
				{
					for(i=0;i<top;i++)cout<<st[i]<<' ';
					return 0;
				}
				break; 
			}
		}
		if(i==(n+1))	//如果到了最后一个还没找到则尝试将栈顶元素弹出开始选择下一个 
		{
			sum-=st[top-1];
			top--; 
		}
	} 
	cout<<"不可能";
	return 0;
}
