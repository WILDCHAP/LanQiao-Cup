#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int visted[6];
char beg[] = "ABCDE*";
int can[100];		//第i行是否可行？
int n = 0;
int way[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };		//分别：上，下，左，右
int N;			//输入N行状态

void search(char *now,int *r,int *c)			//查找空格位置
{
	for(int i=0;i<6;i++)
		if (now[i] == '*')
		{
			*r = i / 3;
			*c = i % 3;
		}
}

void swap(char *now, int beg, int end)
{
	char ch;
	ch = now[beg];
	now[beg] = now[end];
	now[end] = ch;
}

void dfs(char *now,int r,int c)
{
	int x, y;
	if (!strcmp(beg, now))			//先判断是否相等
	{
		can[n] = 1;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		x = r + way[i][0];
		y = c + way[i][1];			//方向
		if (x >= 0 && x <= 1 && y >= 0 && y <= 2 && !visted[x*3+y])		//如果符合要求
		{
			swap(now, x * 3 + y, r * 3 + c);			//交换两位置
			visted[x * 3 + y] = 1;						//标记访问
			dfs(now, x, y);								//从新的横纵坐标开始深搜
			visted[x * 3 + y] = 0;
			swap(now, x * 3 + y, r * 3 + c);			//回溯
		}
	}
}


int main()
{
	int r, c;		//空格所在行列
	char now[6];	//分别表示N行状态
	cin >> N;
	for (n = 0; n < N; n++)
	{
		can[n] = 0;
	}
	for (n = 0; n<6; n++)
		visted[n] = 0;			//标记未访问
	n = 0;
	while (n < N)
	{
		cin >> now;		//输入第n行的状态
		search(now, &r, &c);		//先搜索空格所在位置
		dfs(now, r, c);	//判断是否可行
		n++;
	}
	n = 0;
	while (n < N)
	{
		cout << can[n] << endl;
		n++;
	}
	system("pause");
	return 0;
}



































//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//char beg[6] = { 'A','B','C','D','E','*' };		//表示初始状态
//int vist[100];						//标记访问
//bool same(char *now)
//{
//	for (int i = 0; i < 6; i++)
//		if (now[i] != beg[i])
//			return false;
//	return true;
//}
//
//int swap(char *now,int beg,int end)
//{
//	char ch;
//	if ((now[beg] == '*' || now[end] == '*') &&vist[beg]==0 && vist[end]==0)			//只有他们其中一个是空格才能交换
//	{
//		if (((end < 3 && beg <3) && end == beg + 1) || ((beg > 2 && end >2) && end == beg + 1) || (beg + 3 == end))		//判断是否相邻
//		{
//			ch = now[beg];
//			now[beg] = now[end];
//			now[end] = ch;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int pd(char *now)		//判断是否可行，可行返回1，否则返回0
//{
//	if (same(now))				//每次递归前先判断是否相等
//		return 1;
//	int i, j, k;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 6; j++)			//枚举所有交换情况
//		{
//			if (i == j)
//				continue;
//			if (swap(now, i, j))
//			{
//				if (now[i] = '*')
//				{
//					vist[j] = 1; k = j;
//				}
//				else
//				{
//					vist[i] = 1; k = i;
//				}
//				if (pd(now))			//如果可以交换，深搜
//					return 1;
//				vist[k] = 0;			//回溯
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int N;			//输入N行状态
//	char now[100][6];	//分别表示N行状态
//	int can[100];		//第i行是否可行？
//	int n = 0;
//	cin >> N;
//	while (n < N)
//	{
//		cin >> now[n];		//输入第n行的状态
//		can[n] = pd(now[n]);	//判断是否可行
//		n++;
//	}
//	for (n = 0; n < N; n++)
//		vist[n] = 0;			//标记未访问
//	n = 0;
//	while (n < N)
//	{
//		cout << can[n] << endl;
//		n++;
//	}
//	system("pause");
//	return 0;
//}










//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//char beg[6] = { 'A','B','C','D','E','*' };		//表示初始状态
//
//bool same(char *now)
//{
//	for (int i = 0; i < 6; i++)
//		if (now[i] != beg[i])
//			return false;
//	return true;
//}
//
//int swap(char *now, int beg, int end)
//{
//	if (now[beg] == '*' || now[end] == '*')			//只有他们其中一个是空格才能交换
//	{
//		if (((end < 3 && beg <3) && end == beg + 1) || ((beg > 2 && end >2) && end == beg + 1) || (beg + 3 == end))		//判断是否相邻
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//void swapp(char *now, int beg, int end)
//{
//	char ch;
//	ch = now[beg];
//	now[beg] = now[end];
//	now[end] = ch;
//}
//
//int pd(char *now)		//判断是否可行，可行返回1，否则返回0
//{
//	int i, j;
//	char noww[100][6];
//	int rear = 0, front = 0;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 6; j++)			//枚举所有交换情况
//		{
//			if (i == j)
//				continue;
//			if (swap(now, i, j))
//			{
//				strcpy(noww[rear++], now);			//如果可以交换，进队
//				swapp(now, i, j);
//				j = 0;
//				if (same(now))
//					return 1;
//			}
//		}
//		if (front)
//			strcpy(now, noww[front++]);			//如果不相同，出对
//	}
//	return 0;
//}
//
//int main()
//{
//	int N;			//输入N行状态
//	char now[100][6];	//分别表示N行状态
//	int can[100];		//第i行是否可行？
//	int n = 0;
//	cin >> N;
//	while (n < N)
//	{
//		cin >> now[n];		//输入第n行的状态
//		can[n] = pd(now[n]);	//判断是否可行
//		n++;
//	}
//	n = 0;
//	while (n < N)
//	{
//		cout << can[n] << endl;
//		n++;
//	}
//	system("pause");
//	return 0;
//}