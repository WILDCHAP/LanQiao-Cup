/*#include<iostream>
using namespace std;
int n,a[25],t,way=0;		//n����������СӦΪt 
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
	sq_sta st;		//����ջ������ѡ�����
	st.top=0;
	int sum=0,beg=1;			//��ǰ���� 
	do
	{
		for(i=beg;i<=n;i++)
		{
			if(!vist[i] && sum+a[i]<=t)		//����ܷ����Ҹ���Ʒû���ù� 
			{
				st.data[st.top++]=i;	//��Ž�ջ
				sum+=a[i];
				vist[i]=1;
				if(sum==t)
				display(st);
				break;
			}
		}
		if(i>n)		//���������n������û���ҵ����ڵģ�֤��ջ��Ԫ�������� 
		{
			st.top--;
			vist[st.data[st.top]]=0;	//���δ���� 
			sum-= a[st.data[st.top]];
			beg=st.data[st.top]+1;		//������Ԫ�أ���������һ����ʼ 
		}
	}while(st.top); 
	return 0;
} */


#include<iostream>
using namespace std;
int n,a[25],t,way=0;		//n����������СӦΪt 
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
	f(now-1,sum);		//��ѡ���ú����
	sum+=a[now];
	st.data[st.top++]=now;	//��ջ
	if(sum==t)
	{
		display(st);		//���ջ��Ԫ�� 
		st.top--;				//���� 
		way++;
		return ;
	}
	f(now-1,sum);		//�ú���� 
	st.top--;				//���� 
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
	f(n,0);		//�ӵ�n������ʼ�ã���ʱ��Ϊ0 
	cout<<way<<endl;
	return 0;
}
