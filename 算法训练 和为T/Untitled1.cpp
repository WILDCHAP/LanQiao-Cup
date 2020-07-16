/*#include<iostream>
using namespace std;
int n,a[25],t,way=0;		//n个数，最后大小应为t 
typedef struct{
	int data[100];
	int top;
}sq_sta;
void display(sq_sta st)
{
	for(int i=0;i<st.top;i++)
	cout<<a[st.data[i]]<<' ';
	cout<<endl;
}
int main()
{
	cin>>n;
	int i,j,vist[25];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];vist[i]=0;
	}
	cin>>t;
	sq_sta st;		//定义栈来保存选择的数
	st.top=0;
	int sum=0,beg=1;			//当前重量 
	do
	{
		for(i=beg;i<=n;i++)
		{
			if(!vist[i] && sum+a[i]<=t)		//如果能放下且该物品没有用过 
			{
				st.data[st.top++]=i;	//编号进栈
				sum+=a[i];
				vist[i]=1;
				if(sum==t)
				display(st);
				break;
			}
		}
		if(i>n)		//如果遍历完n个数还没有找到等于的，证明栈顶元素有问题 
		{
			st.top--;
			vist[st.data[st.top]]=0;	//标记未访问 
			sum-= a[st.data[st.top]];
			beg=st.data[st.top]+1;		//跳过此元素，从他的下一个开始 
		}
	}while(st.top); 
	return 0;
} */


#include<iostream>
using namespace std;
int n,a[25],t,way=0;		//n个数，最后大小应为t 
typedef struct{
	int data[100];
	int top;
}sq_sta;
sq_sta st;
void display(sq_sta st)
{
	for(;st.top;st.top--)
	cout<<a[st.data[st.top-1]]<<' ';
	cout<<endl;
}

void f(int now,int sum)
{
	if(now<=0)return;
	f(now-1,sum);		//先选择不拿后面的
	sum+=a[now];
	st.data[st.top++]=now;	//进栈
	if(sum==t)
	{
		display(st);		//输出栈中元素 
		st.top--;				//回溯 
		way++;
		return ;
	}
	f(now-1,sum);		//拿后面的 
	st.top--;				//回溯 
	sum-=a[now];
} 

int main()
{
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>t;st.top=0;
	f(n,0);		//从第n个数开始拿，此时和为0 
	cout<<way<<endl;
	return 0;
}
