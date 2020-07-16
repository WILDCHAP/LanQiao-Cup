/*#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node {
char data;
struct node *next;
}linksnode;
typedef linksnode *linkstring;

//创建链式串
void creat(linkstring *s)
{
char ch;
//linkstring p;
linksnode *p,*r;
*s = NULL, r = NULL;
while ((ch = getchar()) != '\n')
{
p = (linksnode *)malloc(sizeof(linksnode));
p->data = ch;
if (*s == NULL)
*s = p;
else
r->next = p;
r = p;
}
if (r != NULL)
r->next = NULL;
}
//显示链式串
void display(linkstring s)
{
//char ch;
linkstring p;
p = (linkstring)malloc(sizeof(linksnode));
p = s;
while (p)
{
cout << p->data;
p = p->next;
}
}
//查找字串t在主串s中第一次出现的位置
linkstring index(linkstring s, linkstring t)
{
linkstring i, j, k;
i = s, j = t;
while (i && j)
{
k = i; j = t;
while (i && j)
{
if (k->data == j->data)
{
j = j->next;
k = k->next;
}
else
{
i = i->next; k = i; j = t;
}
}
if (!i)
return NULL;
else
return i;
}
}
//查找字串t在主串s中出现的所有位置
linkstring indexall(linkstring s, linkstring t)
{
linkstring i, j, k, p = NULL, q, f=NULL;
i = s; j = t;
int num = 1, numj = 0;
while (j)
{
j = j->next;
numj++;
}//计算字串的长度
j = t; k = i;
while (i)
{
while (i && j)
{
if (k->data == j->data)
{
k = k->next;
j = j->next;
}//如果一个相同就比较下一个
else
{
i = i->next;
num++;
j = t;k = i;
}//一旦出现不相同的就从下一个开始重新比较
}
if(!j)
{
if(p)
num += numj;
q = (linkstring)malloc(sizeof(linksnode));
q->data = num + '0';
if (!p)
p = q;   //第一个节点
q->next = NULL;
if (f)
f->next = q;
f = q;
j = t;i = k;
}  //将第几个数写入链式字符串，并从k继续寻找
}
if (!p)
return NULL;
return p;
}

int main()
{
linkstring s,t,p=NULL;
creat(&s);
creat(&t);
display(s);
cout << endl;
display(t);
cout << endl;
p = indexall(s, t);
if (p)
{
cout << "匹配成功，匹配成功的位置为：";
display(p);
cout << endl;
}
else
cout << "匹配失败！" << endl;
system("pause");
return 0;
}
*/

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//typedef char datatype;
//typedef struct node {
//	datatype data;
//	struct node *next;
//}linkstrnode;
//typedef linkstrnode *linkstring;
//void creat(linkstring *s)
//{
//	char ch;
//	getchar();
//	linkstrnode *p, *r;
//	*s = NULL, r = NULL;
//	ch = getchar();
//	while (ch!= '\n')
//	{
//		p = (linkstrnode *)malloc(sizeof(linkstrnode));
//		p->data = ch;
//		if (*s == NULL)
//			*s = p;
//		else
//			r->next = p;
//		r = p;
//		ch = getchar();
//	}
//	if (r != NULL)
//		r->next = NULL;
//}
//void strinset(linkstring *s)
//{
//	int i;
//	cin >> i;
//	linkstring *x;
//	creat(x);
//	linkstring p, q, r;
//	int k = 1;
//	p = *s;
//	while (p && k<i - 1)
//	{
//		p = p->next;
//		k++;
//	}
//	if (!p)
//	{
//		cout << "输入错误" << endl;
//		exit(1);
//	}
//	else
//	{
//		r = p->next;
//		q = *x;
//		while (q && q->next)
//		{
//			q = q->next;
//		}
//		q->next = r;
//		p->next = *x;
//	}
//}
//void strdele(linkstring *s)
//{
//	int i, len;
//	cin >> i;
//	cin >> len;
//	int k = 1;
//	linkstring p, q, r;
//	p = *s;
//	q = NULL;
//	while (p && k<i)
//	{
//		q = p;
//		p = p->next;
//		k++;
//	}
//	if (!p)
//	{
//		cout << "输入错误1" << endl;
//	}
//	else
//	{
//		k = 1;
//		while (p && k<len)
//		{
//			p = p->next;
//		}
//		if (!p)
//		{
//			cout << "输入错误2" << endl;
//		}
//		else
//		{
//			if (!q)
//			{
//				r = *s;
//				*s = p->next;
//			}
//			else
//			{
//				r = p->next;
//				q->next = r;
//			}
//			p->next = NULL;
//			while (r != NULL)
//			{
//				p = r;
//				r = r->next;
//				free(p);
//			}
//		}
//	}
//}
//void strconcat(linkstring *s1, linkstring *s2)
//{
//	linkstring p;
//	if (!(*s1))
//	{
//		s1 = s2;
//		return;
//	}
//	else
//	{
//		if (s2)
//		{
//			p = *s1;
//			while (p->next)
//				p = p->next;
//			p->next = *s2;
//		}
//	}
//}
//{
//int i,len;
//cin>>i;
//cin>>len;
//int k=1;
//linkstring p,q,r,t;
//p=s;
//while(p && k<i)
//{
//p=p->next;
//k++;
//}
//if(!p)
//{
//cout<<"error1"<<endl;
//return(NULL);
//}
//else
//{
//r=(linkstring)malloc(sizeof(linkstrnode));
//r->data=p->data;
//r->next=NULL;
//k=1;q=r;
//while(p->next && k<len)
//{
//p=p->next;k++;
//t=(linkstring)malloc(sizeof(linkstrnode));
//t->data=p->data;
//q->next=t;q=t;
//}
//if(k<len)
//{
//cout<<"error2"<<endl;
//return(NULL);
//}
//else
//{
//q->next=NULL;
//return(r);
//}
//}
//}*/
//int linkstrfind(linkstring *s1, linkstring *s2)
//{
//	int i = 1, flag = 0;
//	linkstring s, p, q;
//	if (!s1)
//	{
//		cout << "error1" << endl;
//		return -1;
//	}
//	else
//	{
//		if (!s2)
//		{
//			cout << "error2" << endl;
//			return -1;
//		}
//		else
//		{
//			p = *s1;
//			q = *s2;
//			s = (linkstring)malloc(sizeof(linkstrnode));
//			while (p)
//			{
//				while (q)
//				{
//					if (p->data == q->data)
//					{
//						p = p->next;
//						q = q->next;
//						flag = 1;
//					}
//					else
//					{
//						flag = 0;
//						break;
//					}
//				}
//				p = p->next; i++;
//				if (flag == 0)
//				{
//					cout << "没有这个子串" << endl;
//					return -1;
//				}
//				else
//				{
//					return i;
//				}
//			}
//		}
//	}
//
//}
//void display(linkstring *s)
//{
//	linkstring p;
//	p = *s;
//	while (p)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//}
//int main()
//{
//	cout << "1.创建字符串链表" << endl;
//	cout << "2.插入子串" << endl;
//	cout << "3.删除第几个结点以后的几个字符" << endl;
//	cout << "4.连接字符串" << endl;
//	cout << "5.普速匹配" << endl;
//	cout << "6.显示字符串" << endl;
//	cout << "7.退出" << endl;
//	int k=1,t;
//	linkstring s;
//	//s=(linkstring *)malloc(sizeof(linkstrnode));
//	//s=NULL;
//	while (k)
//	{
//		cout << "输入要执行功能的号码" << endl;
//		cin >> t;
//		switch (t)
//		{
//		case 1:
//			creat(&s);
//			break;
//		case 2:
//			strinset(&s);
//			break;
//		case 3:
//			strdele(&s);
//			break;
//		case 4:
//			linkstring *ch1, *ch2;
//			cout << "输入链表名" << endl;
//			creat(ch1);
//			creat(ch2);
//			strconcat(ch1, ch2);
//			break;
//		case 5:
//			linkstring *ch3, *ch4;
//			cout << "输入链表名" << endl;
//			creat(ch3);
//			creat(ch4);
//			linkstrfind(ch3, ch4);
//			break;
//		case 6:
//			linkstring *ch5;
//			cout << "输入链表名" << endl;
//			creat(ch5);
//			display(ch5);
//			break;
//		case 7:
//			exit(1);
//			break;
//		}
//	}
//	return 0;
//}

//二叉树
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//typedef char datatype;
//typedef struct node{
//	datatype data;
//	struct node *lchild, *rchild;
//}node;
//typedef node *bintree;
//typedef struct {
//	bintree data[100];
//	int tag[100];  //用于后序遍历中标记右节点是否访问 是：1
//	int top;
//}seq_sta;
//
////创建二叉树
//bintree creat()
//{
//	bintree t;
//	char ch;
//	if ((ch = getchar()) == '#')
//		t = NULL;
//	else
//	{
//		t = (bintree)malloc(sizeof(node));
//		t->data = ch;
//		t->lchild = creat();
//		t->rchild = creat();
//	}
//	return t;
//}
//
////前序遍历二叉树
//void first(bintree t)
//{
//	if (t)
//	{
//		cout << t->data;
//		first(t->lchild);
//		first(t->rchild);
//	}
//}
//
////中序遍历二叉树
//void mid(bintree t)
//{
//	if (t)
//	{
//		mid(t->lchild);
//		cout << t->data;
//		mid(t->rchild);
//	}
//}
//
////后序遍历二叉树
//void last(bintree t)
//{
//	if (t)
//	{
//		last(t->lchild);
//		last(t->rchild);
//		cout << t->data;
//	}
//}
//
////节点进栈
//void init(seq_sta *s,bintree t)
//{
//	s->data[s->top++] = t;
//}
//
////节点出栈
//bintree out(seq_sta *s)
//{
//	if (s->top != 0)
//	{
//		s->top--;
//		return (s->data[s->top]);
//	}
//	else
//		return NULL;
//}
//
////前序遍历二叉树（非递归）
//void firstn(bintree t)
//{
//	seq_sta s;  //创建栈储存节点
//	s.top = 0;
//	while (s.top != 0 || t)  //当t为空了且栈中没有元素了就退出循环
//	{
//		if (t)
//		{
//			cout << t->data;  //前序遍历，先输出这个值
//			init(&s, t);   //然后将这个节点进栈
//			t = t->lchild;
//		}
//		else   //当t为空时，证明没有左节点，那么出栈访问右节点
//		{
//			t = out(&s);
//			t = t->rchild;
//		}
//	}
//}
//
////中序遍历二叉树（非递归）
//void midn(bintree t)
//{
//	seq_sta s;
//	s.top = 0;
//	while (s.top != 0 || t)
//	{
//		if (t)
//		{
//			init(&s, t);
//			t = t->lchild;   //如果有左节点就一直访问直到t的左节点为空
//		}
//		else   //节点为空时出栈然后输出再访问右节点
//		{
//			t = out(&s);
//			cout << t->data;
//			t = t->rchild;
//		}
//	}
//}
//
////后序遍历二叉树（非递归）
//void lastn(bintree t)
//{
//	seq_sta s;
//	s.top = 0;
//	while (s.top != 0 || t)
//	{
//		if (t)
//		{
//			s.data[s.top] = t;
//			s.tag[s.top] = 0;  //只访问了左节点
//			s.top++;
//			t = t->lchild;
//		}
//		else
//			if (s.tag[s.top - 1] == 1)    //访问了右节点
//			{
//				s.top--;
//				t = s.data[s.top];
//				cout << t->data;
//				t = NULL;   //将t置为空，表示该节点已经输出了
//			}
//			else
//			{
//				t = s.data[s.top - 1];
//				s.tag[s.top - 1] = 1;  //标记，表示访问了右节点，改变tag值但不出栈
//				t = t->rchild;
//			}
//	}
//}
//
////查找二叉树(递归)
//bintree fond(bintree t, datatype x)
//{
//	bintree p;
//	if (!t)
//		return NULL;
//	else if (t->data == x)
//	{
//		return t;
//	}
//	else
//	{
//		p = fond(p->lchild, x);//查找左节点
//		if (p)
//			return p;   //如果p不为空，证明找到，返回p
//		else
//			return fond(p->rchild, x);//如果为空，则从右节点继续查找
//	}
//}
//
////统计二叉树结点个数
//int stat(bintree t)
//{
//	if (!t)
//		return 0;
//	else
//		return (stat(t->lchild) + stat(t->rchild) + 1);
//}
//
//int main()
//{
//	bintree t;
//	int k = 1;
//	while (k)
//	{
//		cout << "\n\n     1.按前序遍历创建二叉树" << endl;
//		cout << "     2.前序遍历二叉树" << endl;
//		cout << "     3.中序遍历二叉树" << endl;
//		cout << "     4.后序遍历二叉树" << endl;
//		cout << "     5.前序遍历二叉树（非递归）" << endl;
//		cout << "     6.中序遍历二叉树（非递归）" << endl;
//		cout << "     7.后序遍历二叉树（非递归）" << endl;
//		cout << "     8.查找二叉树" << endl;
//		cout << "     9.统计二叉树结点个数" << endl;
//		cout << "     0.退出" << endl;
//		cout << "     请选择：";
//		int n;
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			cout << "请按前序遍历输入二叉树：";
//			getchar();
//			t = creat();
//			cout << "创建二叉树完毕！" << endl;
//			break;
//		case 2:
//			cout << "\n前序遍历二叉树：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			first(t);
//			cout << "前序遍历二叉树完毕！" << endl;
//			break;
//		case 3:
//			cout << "\n中序遍历二叉树：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			mid(t);
//			cout << "中序遍历二叉树完毕！" << endl;
//			break;
//		case 4:
//			cout << "\n后序遍历二叉树：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			last(t);
//			cout << "后序遍历二叉树完毕！" << endl;
//			break;
//		case 5:
//			cout << "\n前序遍历二叉树（非递归）：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			firstn(t);
//			cout << "前序遍历二叉树（非递归）完毕！" << endl;
//			break;
//		case 6:
//			cout << "\n中序遍历二叉树（非递归）：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			midn(t);
//			cout << "中序遍历二叉树（非递归）完毕！" << endl;
//			break;
//		case 7:
//			cout << "\n后序遍历二叉树（非递归）：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			lastn(t);
//			cout << "后序遍历二叉树（非递归）完毕！" << endl;
//			break;
//		case 8:
//			cout << "\n二叉树的查找：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			cout << "请输入要查找的节点值：";
//			datatype x;
//			bintree p;
//			cin >> x;
//			p = fond(t, x);
//			cout << "二叉树的查找完毕！已被指向二叉树的指针p指向。" << endl;
//			break;
//		case 9:
//			cout << "\n统计二叉树结点个数：";
//			if (!t)
//			{
//				cout << "请返回创建二叉树！\n";
//				break;
//			}
//			int y;
//			y = stat(t);
//			cout << "二叉树的查找完毕！二叉树的节点个数为" <<y<<"个"<< endl;
//			break;
//		case 0:
//			exit(1);
//		}
//		cout <<"     请选择："<< endl;
//	}
//	system("pause");
//	return 0;
//}//


#include<iostream>
#include<stdlib.h>
#define MAXSIZE 3
#define MAXLEN 100
using namespace std;
typedef char datatype;
typedef struct node {
	datatype data;
	struct node *child[MAXSIZE];
}node;
typedef node *tree;
typedef struct {
	tree data[100];
	int x[100];//来标识进栈的孩子下标
	int top;
}seq;

//前序遍历创建一棵树(递归)
tree creat()
{
	char ch;
	tree p;
	//ch = getchar();
	if ((ch = getchar()) == '#')
		p = NULL;
	else
	{
		p = (tree)malloc(sizeof(node));
		p->data = ch;
		for (int i = 0; i < MAXSIZE; i++)
		{
			p->child[i] = creat();
		}
	}
	return p;
}

//树的层次遍历
void levder(tree t)
{
	tree a[100];
	tree p;
	int i = 0, j = 1;
	a[0] = t;  //根结点
	while (i < j)
	{
		p = a[i++];
		cout << p->data;
		for (int k = 0; k < MAXSIZE; k++)
		{
			if (p->child[k])  //如果子节点不为空
				a[j++] = p->child[k];
		}
	}
}

//进栈
void init(seq *s, tree t, int i)
{
	s->data[s->top] = t;
	s->x[s->top] = i;
	s->top++;
}

//出栈
tree out(seq *s)
{
	if (s->top != 0)
	{
		s->top--;
		return (s->data[s->top]);
	}
	else
		return NULL;
}

//数的前序遍历（不用递归）
void pre(tree t)
{
	tree p;
	seq s;  //定义一个栈来后进先出;
	s.top = 0;
	int i = 0;
	if (t)
	{
		cout << t->data;
		init(&s, t, -1);
	}
	while ((s.top != 0) || t)
	{
		//i = 0;
		if (!t->child[i] && i < 3)  //如果t->child[i]为空且没有遍历完孩子，则访问他的下一个儿子
		{
			i++;
		}
		else
			if (i >= 3)  //如果三个孩子都为空
			{
				i = s.x[s.top - 1] + 1;  //从他的下一个孩子开始遍历
				if (i == 0)
					return;
				t = out(&s);
			}
			else
			{
				init(&s, t, i);
				t = t->child[i];
				cout << t->data;
				i = 0;
			}
	}
}

//树的后序遍历（不用递归）
void post(tree t)
{
	seq s;
	s.top = 0;
	int i = 0;
	if (t)
	{
		//cout << t->data;
		init(&s, t, -1);
	}
	while ((s.top != 0) || t)
	{
		//i = 0;
		if (!t->child[i] && i < 3)  //如果t->child[i]为空且没有遍历完孩子，则访问他的下一个儿子
		{
			i++;
		}
		else
			if (i >= 3)  //如果三个孩子都为空
			{
				cout << t->data;
				i = s.x[s.top - 1] + 1;  //从他的下一个孩子开始遍历
				if (i == 0)
					return;
				t = out(&s);
			}
			else
			{
				init(&s, t, i);
				t = t->child[i];
				i = 0;
			}
	}
}

//检查两棵树是否相等
int isequal(tree t1, tree t2)
{
	int i;
	i = 0;
	if (!t1 && !t2)
		i = 1;
	else
		if (t1 && t2)
			if (t1->data == t2->data)
				if (isequal(t1->child[0], t2->child[0]))
					if (isequal(t1->child[1], t2->child[1]))
						i = isequal(t1->child[2], t2->child[2]);
	return i;
}

//根据括号创建字符串s
tree ct(char s[])
{
	tree p, q, t;
	p = NULL; q = NULL;
	seq a;  //定义一个栈来后进先出;
	a.top = 0;
	int i = 0, j = 0, k = 0, z = 0; //z标识结束（结束为1）
	while (z == 0 && s[i] != '\0')   //字符串不为空
	{
		if (s[i] == '(')  
		{
			i++;
			if (!p)  //如果是第一个节点就记录下它
			{
				p = q; t = p;
			}
			else
				p = q;
			init(&a, p, i);		//将有子节点的结点进栈
		}
		else if (s[i] == ')') 
		{
			i++;
			//a.top--;
			if (a.top-1 == 0)           //栈为空结束
				z = 1;
			else
			{
				p = out(&a);
				p = out(&a);	//否则证明该节点走到了尽头，就再次出战(连续出两次)
			}
		}
		else if (s[i] == ',')
			i++;
		else
		{
			q = (tree)malloc(sizeof(node));
			q->data = s[i];
			for (j = 0; j<3; j++)
				q->child[j] = NULL;
			if (p)
			{
				for (k = 0; k < 3; k++)
				{
					if (!p->child[k])  //直到找到为空的子节点再写入
					{
						p->child[k] = q;
						break;
					}
				}
			}
			i++;
		}
	}
	return t;
}

int main()
{
	tree p, q;
	int k = 1;
	while (k == 1)
	{
		cout << "\n\n     1.按前序遍历输入树的信息" << endl;
		cout << "     2.层次遍历" << endl;
		cout << "     3.前序遍历(不用递归)" << endl;
		cout << "     4.后序遍历(不用递归)" << endl;
		cout << "     5.检查两树是否相等" << endl;
		cout << "     6.用括号字符串创建树" << endl;
		cout << "     9.退出" << endl;
		cout << "     请选择：";
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "请按前序遍历输入：";
			getchar();
			p = creat();
			break;
		case 2:
			cout << "\n层次遍历序列是：";
			levder(p);
			break;
		case 3:
			cout << "\n前序遍历序列是：";
			pre(p);
			break;
		case 4:
			cout << "\n后序遍历序列是：";
			post(p);
			break;
		case 5:
			if (!p)
			{
				cout << "请先创建第一棵树：";
				p = creat();
			}
			cout << "请输入第二颗树：";
			getchar();
			q = creat();
			if (isequal(p, q) == 1)
				cout << "两棵树是等价的！" << endl;
			else
				cout << "两棵树不是等价的！" << endl;
			break;
		case 6:
			char a[100];
			cout << "请输入一个字符串用于创建树:" << endl;
			cin >> a;
			p = NULL;
			p = ct(a);
			cout << "创建树完成！" << endl;
			break;
		case 9:
			exit(1);
		}
		cout << endl;
	}
	/*p = creat();
	levder(p);*/
	system("pause");
	return 0;
}



