/*#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node {
char data;
struct node *next;
}linksnode;
typedef linksnode *linkstring;

//������ʽ��
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
//��ʾ��ʽ��
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
//�����ִ�t������s�е�һ�γ��ֵ�λ��
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
//�����ִ�t������s�г��ֵ�����λ��
linkstring indexall(linkstring s, linkstring t)
{
linkstring i, j, k, p = NULL, q, f=NULL;
i = s; j = t;
int num = 1, numj = 0;
while (j)
{
j = j->next;
numj++;
}//�����ִ��ĳ���
j = t; k = i;
while (i)
{
while (i && j)
{
if (k->data == j->data)
{
k = k->next;
j = j->next;
}//���һ����ͬ�ͱȽ���һ��
else
{
i = i->next;
num++;
j = t;k = i;
}//һ�����ֲ���ͬ�ľʹ���һ����ʼ���±Ƚ�
}
if(!j)
{
if(p)
num += numj;
q = (linkstring)malloc(sizeof(linksnode));
q->data = num + '0';
if (!p)
p = q;   //��һ���ڵ�
q->next = NULL;
if (f)
f->next = q;
f = q;
j = t;i = k;
}  //���ڼ�����д����ʽ�ַ���������k����Ѱ��
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
cout << "ƥ��ɹ���ƥ��ɹ���λ��Ϊ��";
display(p);
cout << endl;
}
else
cout << "ƥ��ʧ�ܣ�" << endl;
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
//		cout << "�������" << endl;
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
//		cout << "�������1" << endl;
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
//			cout << "�������2" << endl;
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
//					cout << "û������Ӵ�" << endl;
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
//	cout << "1.�����ַ�������" << endl;
//	cout << "2.�����Ӵ�" << endl;
//	cout << "3.ɾ���ڼ�������Ժ�ļ����ַ�" << endl;
//	cout << "4.�����ַ���" << endl;
//	cout << "5.����ƥ��" << endl;
//	cout << "6.��ʾ�ַ���" << endl;
//	cout << "7.�˳�" << endl;
//	int k=1,t;
//	linkstring s;
//	//s=(linkstring *)malloc(sizeof(linkstrnode));
//	//s=NULL;
//	while (k)
//	{
//		cout << "����Ҫִ�й��ܵĺ���" << endl;
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
//			cout << "����������" << endl;
//			creat(ch1);
//			creat(ch2);
//			strconcat(ch1, ch2);
//			break;
//		case 5:
//			linkstring *ch3, *ch4;
//			cout << "����������" << endl;
//			creat(ch3);
//			creat(ch4);
//			linkstrfind(ch3, ch4);
//			break;
//		case 6:
//			linkstring *ch5;
//			cout << "����������" << endl;
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

//������
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
//	int tag[100];  //���ں�������б���ҽڵ��Ƿ���� �ǣ�1
//	int top;
//}seq_sta;
//
////����������
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
////ǰ�����������
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
////�������������
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
////�������������
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
////�ڵ��ջ
//void init(seq_sta *s,bintree t)
//{
//	s->data[s->top++] = t;
//}
//
////�ڵ��ջ
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
////ǰ��������������ǵݹ飩
//void firstn(bintree t)
//{
//	seq_sta s;  //����ջ����ڵ�
//	s.top = 0;
//	while (s.top != 0 || t)  //��tΪ������ջ��û��Ԫ���˾��˳�ѭ��
//	{
//		if (t)
//		{
//			cout << t->data;  //ǰ���������������ֵ
//			init(&s, t);   //Ȼ������ڵ��ջ
//			t = t->lchild;
//		}
//		else   //��tΪ��ʱ��֤��û����ڵ㣬��ô��ջ�����ҽڵ�
//		{
//			t = out(&s);
//			t = t->rchild;
//		}
//	}
//}
//
////����������������ǵݹ飩
//void midn(bintree t)
//{
//	seq_sta s;
//	s.top = 0;
//	while (s.top != 0 || t)
//	{
//		if (t)
//		{
//			init(&s, t);
//			t = t->lchild;   //�������ڵ��һֱ����ֱ��t����ڵ�Ϊ��
//		}
//		else   //�ڵ�Ϊ��ʱ��ջȻ������ٷ����ҽڵ�
//		{
//			t = out(&s);
//			cout << t->data;
//			t = t->rchild;
//		}
//	}
//}
//
////����������������ǵݹ飩
//void lastn(bintree t)
//{
//	seq_sta s;
//	s.top = 0;
//	while (s.top != 0 || t)
//	{
//		if (t)
//		{
//			s.data[s.top] = t;
//			s.tag[s.top] = 0;  //ֻ��������ڵ�
//			s.top++;
//			t = t->lchild;
//		}
//		else
//			if (s.tag[s.top - 1] == 1)    //�������ҽڵ�
//			{
//				s.top--;
//				t = s.data[s.top];
//				cout << t->data;
//				t = NULL;   //��t��Ϊ�գ���ʾ�ýڵ��Ѿ������
//			}
//			else
//			{
//				t = s.data[s.top - 1];
//				s.tag[s.top - 1] = 1;  //��ǣ���ʾ�������ҽڵ㣬�ı�tagֵ������ջ
//				t = t->rchild;
//			}
//	}
//}
//
////���Ҷ�����(�ݹ�)
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
//		p = fond(p->lchild, x);//������ڵ�
//		if (p)
//			return p;   //���p��Ϊ�գ�֤���ҵ�������p
//		else
//			return fond(p->rchild, x);//���Ϊ�գ�����ҽڵ��������
//	}
//}
//
////ͳ�ƶ�����������
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
//		cout << "\n\n     1.��ǰ���������������" << endl;
//		cout << "     2.ǰ�����������" << endl;
//		cout << "     3.�������������" << endl;
//		cout << "     4.�������������" << endl;
//		cout << "     5.ǰ��������������ǵݹ飩" << endl;
//		cout << "     6.����������������ǵݹ飩" << endl;
//		cout << "     7.����������������ǵݹ飩" << endl;
//		cout << "     8.���Ҷ�����" << endl;
//		cout << "     9.ͳ�ƶ�����������" << endl;
//		cout << "     0.�˳�" << endl;
//		cout << "     ��ѡ��";
//		int n;
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//			cout << "�밴ǰ����������������";
//			getchar();
//			t = creat();
//			cout << "������������ϣ�" << endl;
//			break;
//		case 2:
//			cout << "\nǰ�������������";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			first(t);
//			cout << "ǰ�������������ϣ�" << endl;
//			break;
//		case 3:
//			cout << "\n���������������";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			mid(t);
//			cout << "���������������ϣ�" << endl;
//			break;
//		case 4:
//			cout << "\n���������������";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			last(t);
//			cout << "���������������ϣ�" << endl;
//			break;
//		case 5:
//			cout << "\nǰ��������������ǵݹ飩��";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			firstn(t);
//			cout << "ǰ��������������ǵݹ飩��ϣ�" << endl;
//			break;
//		case 6:
//			cout << "\n����������������ǵݹ飩��";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			midn(t);
//			cout << "����������������ǵݹ飩��ϣ�" << endl;
//			break;
//		case 7:
//			cout << "\n����������������ǵݹ飩��";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			lastn(t);
//			cout << "����������������ǵݹ飩��ϣ�" << endl;
//			break;
//		case 8:
//			cout << "\n�������Ĳ��ң�";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			cout << "������Ҫ���ҵĽڵ�ֵ��";
//			datatype x;
//			bintree p;
//			cin >> x;
//			p = fond(t, x);
//			cout << "�������Ĳ�����ϣ��ѱ�ָ���������ָ��pָ��" << endl;
//			break;
//		case 9:
//			cout << "\nͳ�ƶ�������������";
//			if (!t)
//			{
//				cout << "�뷵�ش�����������\n";
//				break;
//			}
//			int y;
//			y = stat(t);
//			cout << "�������Ĳ�����ϣ��������Ľڵ����Ϊ" <<y<<"��"<< endl;
//			break;
//		case 0:
//			exit(1);
//		}
//		cout <<"     ��ѡ��"<< endl;
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
	int x[100];//����ʶ��ջ�ĺ����±�
	int top;
}seq;

//ǰ���������һ����(�ݹ�)
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

//���Ĳ�α���
void levder(tree t)
{
	tree a[100];
	tree p;
	int i = 0, j = 1;
	a[0] = t;  //�����
	while (i < j)
	{
		p = a[i++];
		cout << p->data;
		for (int k = 0; k < MAXSIZE; k++)
		{
			if (p->child[k])  //����ӽڵ㲻Ϊ��
				a[j++] = p->child[k];
		}
	}
}

//��ջ
void init(seq *s, tree t, int i)
{
	s->data[s->top] = t;
	s->x[s->top] = i;
	s->top++;
}

//��ջ
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

//����ǰ����������õݹ飩
void pre(tree t)
{
	tree p;
	seq s;  //����һ��ջ������ȳ�;
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
		if (!t->child[i] && i < 3)  //���t->child[i]Ϊ����û�б����꺢�ӣ������������һ������
		{
			i++;
		}
		else
			if (i >= 3)  //����������Ӷ�Ϊ��
			{
				i = s.x[s.top - 1] + 1;  //��������һ�����ӿ�ʼ����
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

//���ĺ�����������õݹ飩
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
		if (!t->child[i] && i < 3)  //���t->child[i]Ϊ����û�б����꺢�ӣ������������һ������
		{
			i++;
		}
		else
			if (i >= 3)  //����������Ӷ�Ϊ��
			{
				cout << t->data;
				i = s.x[s.top - 1] + 1;  //��������һ�����ӿ�ʼ����
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

//����������Ƿ����
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

//�������Ŵ����ַ���s
tree ct(char s[])
{
	tree p, q, t;
	p = NULL; q = NULL;
	seq a;  //����һ��ջ������ȳ�;
	a.top = 0;
	int i = 0, j = 0, k = 0, z = 0; //z��ʶ����������Ϊ1��
	while (z == 0 && s[i] != '\0')   //�ַ�����Ϊ��
	{
		if (s[i] == '(')  
		{
			i++;
			if (!p)  //����ǵ�һ���ڵ�ͼ�¼����
			{
				p = q; t = p;
			}
			else
				p = q;
			init(&a, p, i);		//�����ӽڵ�Ľ���ջ
		}
		else if (s[i] == ')') 
		{
			i++;
			//a.top--;
			if (a.top-1 == 0)           //ջΪ�ս���
				z = 1;
			else
			{
				p = out(&a);
				p = out(&a);	//����֤���ýڵ��ߵ��˾�ͷ�����ٴγ�ս(����������)
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
					if (!p->child[k])  //ֱ���ҵ�Ϊ�յ��ӽڵ���д��
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
		cout << "\n\n     1.��ǰ���������������Ϣ" << endl;
		cout << "     2.��α���" << endl;
		cout << "     3.ǰ�����(���õݹ�)" << endl;
		cout << "     4.�������(���õݹ�)" << endl;
		cout << "     5.��������Ƿ����" << endl;
		cout << "     6.�������ַ���������" << endl;
		cout << "     9.�˳�" << endl;
		cout << "     ��ѡ��";
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "�밴ǰ��������룺";
			getchar();
			p = creat();
			break;
		case 2:
			cout << "\n��α��������ǣ�";
			levder(p);
			break;
		case 3:
			cout << "\nǰ����������ǣ�";
			pre(p);
			break;
		case 4:
			cout << "\n������������ǣ�";
			post(p);
			break;
		case 5:
			if (!p)
			{
				cout << "���ȴ�����һ������";
				p = creat();
			}
			cout << "������ڶ�������";
			getchar();
			q = creat();
			if (isequal(p, q) == 1)
				cout << "�������ǵȼ۵ģ�" << endl;
			else
				cout << "���������ǵȼ۵ģ�" << endl;
			break;
		case 6:
			char a[100];
			cout << "������һ���ַ������ڴ�����:" << endl;
			cin >> a;
			p = NULL;
			p = ct(a);
			cout << "��������ɣ�" << endl;
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



