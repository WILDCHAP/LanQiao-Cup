#include<iostream>
using namespace std;
int n,t,a[25],way=0;
typedef struct{
	int data[100];
	int top;
};
void display(se)
void f(int now,int sum)		//物品拿了x 重量 y
{
	if(now<=0)return;
	f(now-1,sum);	//先不拿
	sum+=a[now];
	st.data[st.top++]=now;
	if(sum==t)
	{
		display(st);
		st.top--;
		way++;
		return ;
	} 
	f(now-1,sum);
	st.top--;
	way++;
	return;
}

int main()
{
	int i;cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>t;st.top=0;
	f(n,0);
	cout<<way<<endl;
	f(0,0);
	return 0;
}
