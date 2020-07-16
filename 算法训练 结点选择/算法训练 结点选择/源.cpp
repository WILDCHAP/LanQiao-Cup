#include<iostream>
#include<stdlib.h>
using namespace std;
int vist[100] = { 0 };	//判断访问
int dp[100][2] ;	//dp[i][j] i为当前节点序号，j 0为不经过，1为经过，该值为到这个节点经过和不经过时已有的权值
typedef struct node{
	int data;
	struct node * next;
}node;
typedef struct {
	int headdata;
	struct node *first;
}head;
head s[100];


bool pd(int n)				//判断这个节点相邻节点是否经过
{
	node *ss;
	ss = s[n].first;
	while (ss)
	{
		if (vist[ss->data] == 1)		//只要有一个节点访问过就返回
			return true;
		ss = ss->next;
	}
	return false;
}

int main()
{
	int i, j, m, n, k;
	int N;		//N个正整数
	cin >> N;
	for (i = 0; i <= N; i++)
		for (j = 0; j < 2; j++)
			dp[i][j] = 0;			//初始化
	for (i = 1; i <= N; i++)
	{
		cin >> s[i].headdata;
		s[i].first = NULL;
	}
	for (i = 1; i <= (N - 1); i++)
	{
		node *t1;
		t1 = (node *)malloc(sizeof(node));
		node *t2;
		t2 = (node *)malloc(sizeof(node));
		cin >> m >> n;
		t1->data = n;
		t1->next = s[m].first;
		s[m].first = t1;
		t2->data = m;
		t2->next = s[n].first;
		s[n].first = t2;				//插入数据
	}
	int max = 0;
	for (i = 1; i <= N; i++)		//节点从第一个到第N个
	{
		for (j = 0; j < 2; j++)		//从不经过到经过
		{
			if (j == 1)
			{
				vist[i] = 1;
				dp[i][j] = s[i].headdata;	//第一个节点赋值
			}
			if (j == 1 && pd(i))		//判断第i个节点能否经过
				continue;
			else if (j == 1)			//如果经过
			{
				dp[i][j] = s[i].headdata + dp[i - 1][k];
			}
			else if (j == 0)
			{
				dp[i][j] = dp[i - 1][k];
			}
		}
		k = j;		//保留上一次选择
		if (i == N)
		{
			for (int z = 0; z < 2; z++)
				if (dp[N][z] > max)
					max = dp[i][z];
		}
	}
	cout << max << endl;
	system("pause");
	return 0;
}



/*#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define _Max 100010
#define max(a, b) a > b ? a : b

struct point
{
	int v, next;   //v指向这条边的另一个结点（父结点），next指向子结点
} edge[_Max * 2];  //一条边记录两次，分别以一个点做记录

int head[_Max];
int M;
int dp[_Max][2];

//添加一个边
void addEdge(int from, int to)
{
	//from结点
	edge[M].v = to;
	edge[M].next = head[from];    //为-1则定位叶结点，否则，指向另外一条边
	head[from] = M++;             //指向他的一条边，增加结点
								  //to结点
	edge[M].v = from;
	edge[M].next = head[to];      //为-1则定位叶结点，否则，指向另外一条边
	head[to] = M++;               //指向他的一条边，增加结点
	return;
}

//深度遍历，先深入到叶子结点，然后一层一层往上回升，一直到根结点，即第一个结点（初始pre为－1是因为根结点没有父结点，用－1表示）
void dfs(int x, int pre)
{
	int i = head[x], v;
	for (; i != -1; i = edge[i].next)  //i != -1说明有子结点，则遍历子结点，否则为叶子结点
	{
		v = edge[i].v;
		if (pre == v)  //如果指向的子结点和父结点重合，则说明这个结点是叶子结点，不需要进一步dp
		{
			continue;
		}
		dfs(v, x);     //x可以理解为父结点
					   //深度遍历到最里面的叶子结点的父结点   如果父结点选择，则子结点不选择，否则子结点可能选择或者不选择，但是要比较两者哪个大选择哪个
		dp[x][1] += dp[v][0];                   //   父结点（选） ＋＝ 子结点（不选）
		dp[x][0] += max(dp[v][0], dp[v][1]);    //   父结点（不选） ＋＝ max（子结点（不选），子结点（选））
	}
	return;
}
int main(int argc, const char * argv[])
{
	int i, n, s, t, tmp;
	scanf("%d", &n);
	M = 0;
	memset(head, -1, sizeof(head));   //初始化每个结点都是独立的没有子结点
	memset(dp, 0, sizeof(dp));
	//输入权值，并且记录在dp[i][1]上，i表示第i个结点，1代表取了这个结点
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &dp[i][1]);
	}
	//输入边，并且添加edge，一个边添加两个edge
	for (i = 1; i < n; i++)
	{
		scanf("%d %d", &s, &t);
		addEdge(s, t);
	}
	dfs(1, -1);   //深度优先遍历，从第一个结点开始遍历
	tmp = max(dp[1][0], dp[1][1]);    //求出最大的权值和
	printf("%d\n", tmp);
	system("pause");
	return 0;
}*/


/*#include<iostream>
#include<stdlib.h>
#define max(a,b)? a:b
using namespace std;

typedef struct {
	int data;		//节点值
	int num;		//相连线条数
	int son[100];	//父/子节点
}node;
node A[100];
int dp[100][2];	//动态规划，判断第i个节点分别出和入

int main()
{
	int N;
	cin >> N;
	int i, j, m, n;
	for (i = 1; i <= N; i++)
	{
		cin >> A[i].data;		//输入节点值
	}
	for (i = 1; i < N; i++)
	{
		cin>>m>>n;
		A[m].num++;
		A[n].num++;		//每个节点的边加一
		A[m].son[]
	}
	system("pause");
	return 0;
}*/


/*#include <cstdio>  
#include <vector>  
using namespace std;
vector<int> vec[100001];
int value[100001][2];
void dp(int u, int v)
{
	for (int i = 0; i<vec[u].size(); i++)
	{
		int k = vec[u][i];
		if (k != v)
		{
			dp(k, u);
			//这里并没有确定选还是不选择该节点，只不过将如果不选的话，然后就对当前的孩子的值加到到父亲的里面  
			//如果选的话， 就把孩子不选的值加到这里   
			value[u][1] += value[k][0];
			value[u][0] += (value[k][0] > value[k][1] ? value[k][0] : value[k][1]);
		}
	}
}
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		int val;
		scanf("%d", &val);
		value[i][1] = val;
	}

	for (int i = 1; i<count; i++)
	{
		int s, e;
		scanf("%d %d", &s, &e);
		//这里就涉及到了他的树是如何通过数组进行建立的了  
		//每次输入父节点和子节点的时候，就分别向父数组中存入孩子的值  
		//向孩子数组存入父亲的值 这样就可以通过孩子的数组找到父亲了   
		vec[s].push_back(e);
		vec[e].push_back(s);
	}

	for (int i = 0; i<count; i++)
	{
		//这里为什么要选择一个叶子节点进行运算呢？        
		//原因是如果按正常的想法首先是从树的根进行网下递归  但是这个时候就要判断他的两个孩子  
		//是否被选上， 而以叶子节点开始呢？？  就不必判断两个点了 直接判断他的父亲节点选还是不选的时候  
		//值最大， 所以要从叶子节点开始   
		if (vec[i].size() == 1)
		{
			dp(i, -1);
			printf("%d\n", (value[i][0]>value[i][1] ? value[i][0] : value[i][1]));
			break;
		}
	}
}*/



