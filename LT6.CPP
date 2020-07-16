#include<iostream>
#include<stdlib.h>
#define maxsize 100
using namespace std;
typedef char datatype;
typedef struct node
{
	datatype data;
	struct node *lchild, *rchild;
}bintnode;
typedef bintnode *bintree;
bintree root;
typedef struct stack                           //非递归调用
{
	bintree data[maxsize];
	int top;
	int tag[maxsize];
}seqstack;

void push(seqstack *s,bintree t)
{
	s->data[s->top++]=t;
}

bintree out(seqstack *s)
{
	if(s->top!=0)
	{
		s->top--;
		return (s->data[s->top]);
	}
}
                                                   //非递归调用
void preorder(bintree t)                  //前序递归调用                        
{
	if(t)
	{
		cout<<t->data<<endl;
		preorder(t->lchild);
		preorder(t->rchild);
	}
}

void midorder(bintree t)                  //中序递归调用
{
	if(t)
	{
	    midorder(t->lchild);
		cout<<t->data<<endl;
		midorder(t->rchild);
	}
}

void rearorder(bintree t)                //后序递归调用
{
	if(t)
	{
		rearorder(t->lchild);
		rearorder(t->rchild);
		cout<<t->data<<endl;
	}
}                                           

bintree create()                            //前序递归创建二叉树
{
	datatype ch;
	bintree t;
	cin>>ch;
	if(ch=='#')
	{
		t=NULL;
		return NULL;
	}
	else
	{
		t=(bintree)malloc(sizeof(bintree));
		t->data=ch;
		t->lchild=create();
		t->rchild=create();
	}
	return t;
}

void preorder2(bintree t)                            //前序遍历非递归调用 
{
	seqstack  s;
	s.top=0;
	while(t || (s.top!=0))
	{
		if(t)
		{
		    cout<<t->data<<endl;
			push(&s,t);
			t=t->lchild;
		}
		else
		{
			t=out(&s);
			t=t->rchild;
		}
	}
}

void midorder2(bintree t)                        //中序遍历非递归调用
{
	seqstack  s;
	s.top=0;
	while(t || (s.top!=0))
	{
		if(t)
		{
			push(&s,t);
			t=t->lchild;
		}
		else
		{
			t=out(&s);
			cout<<t->data<<endl;
			t=t->rchild;
		}
	}
}

void rearorder2(bintree t)                    //后序遍历非递归调用
{
	seqstack s;
	s.top=0;
	while(t || (s.top!=0))
	{
		seqstack s;
		s.top=0;
		while(t || (s.top!=0))
		{
			if(t)
			{
				s.data[s.top]=t;
				s.tag[s.top]=0;
				s.top++;
				t=t->lchild;
			}
			else
				if(s.tag[s.top-1]==1)
				{
					s.top--;
					t=s.data[s.top];
					cout<<t->data<<endl;
					t=NULL;
				}
				else
				{
					t=s.data[s.top-1];
					s.tag[s.top-1]=1;
					t=t->rchild;
				}
		}
	}
}                                                        
int main()
{
	bintree t;
	 int n;
	   cout<<"1.前序遍历创建一个二叉树"<<endl;
       cout<<"2.递归前序遍历"<<endl;
       cout<<"3.递归中序遍历"<<endl;
	   cout<<"4.递归后序遍历"<<endl;
	   cout<<"5.非递归前序遍历"<<endl;
	   cout<<"6.非递归中序遍历"<<endl;
	   cout<<"7.非递归后序遍历"<<endl;
	   cout<<"8.结束"<<endl;
	cin>>n;
	while(n!=8)
	{
	  switch(n)
	  {  
	    case 1:t=create();break;
		case 2:preorder(t);break;
		case 3:midorder(t);break;
		case 4:rearorder(t);break;
		case 5:preorder2(t);break;
		case 6:midorder2(t);break;
		case 7:rearorder2(t);break;
		case 8:exit(1);break;
	
	  }
	   cout<<"1.前序遍历创建一个二叉树"<<endl;
       cout<<"2.递归前序遍历"<<endl;
       cout<<"3.递归中序遍历"<<endl;
	   cout<<"4.递归后序遍历"<<endl;
	   cout<<"5.非递归前序遍历"<<endl;
	   cout<<"6.非递归中序遍历"<<endl;
	   cout<<"7.非递归后序遍历"<<endl;
	   cout<<"8.结束"<<endl;
	   cin>>n;
	}
	return 0;
}
