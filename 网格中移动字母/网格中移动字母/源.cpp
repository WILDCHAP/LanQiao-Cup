#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int visted[6];
char beg[] = "ABCDE*";
int can[100];		//��i���Ƿ���У�
int n = 0;
int way[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };		//�ֱ��ϣ��£�����
int N;			//����N��״̬

void search(char *now,int *r,int *c)			//���ҿո�λ��
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
	if (!strcmp(beg, now))			//���ж��Ƿ����
	{
		can[n] = 1;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		x = r + way[i][0];
		y = c + way[i][1];			//����
		if (x >= 0 && x <= 1 && y >= 0 && y <= 2 && !visted[x*3+y])		//�������Ҫ��
		{
			swap(now, x * 3 + y, r * 3 + c);			//������λ��
			visted[x * 3 + y] = 1;						//��Ƿ���
			dfs(now, x, y);								//���µĺ������꿪ʼ����
			visted[x * 3 + y] = 0;
			swap(now, x * 3 + y, r * 3 + c);			//����
		}
	}
}


int main()
{
	int r, c;		//�ո���������
	char now[6];	//�ֱ��ʾN��״̬
	cin >> N;
	for (n = 0; n < N; n++)
	{
		can[n] = 0;
	}
	for (n = 0; n<6; n++)
		visted[n] = 0;			//���δ����
	n = 0;
	while (n < N)
	{
		cin >> now;		//�����n�е�״̬
		search(now, &r, &c);		//�������ո�����λ��
		dfs(now, r, c);	//�ж��Ƿ����
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
//char beg[6] = { 'A','B','C','D','E','*' };		//��ʾ��ʼ״̬
//int vist[100];						//��Ƿ���
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
//	if ((now[beg] == '*' || now[end] == '*') &&vist[beg]==0 && vist[end]==0)			//ֻ����������һ���ǿո���ܽ���
//	{
//		if (((end < 3 && beg <3) && end == beg + 1) || ((beg > 2 && end >2) && end == beg + 1) || (beg + 3 == end))		//�ж��Ƿ�����
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
//int pd(char *now)		//�ж��Ƿ���У����з���1�����򷵻�0
//{
//	if (same(now))				//ÿ�εݹ�ǰ���ж��Ƿ����
//		return 1;
//	int i, j, k;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 6; j++)			//ö�����н������
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
//				if (pd(now))			//������Խ���������
//					return 1;
//				vist[k] = 0;			//����
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int N;			//����N��״̬
//	char now[100][6];	//�ֱ��ʾN��״̬
//	int can[100];		//��i���Ƿ���У�
//	int n = 0;
//	cin >> N;
//	while (n < N)
//	{
//		cin >> now[n];		//�����n�е�״̬
//		can[n] = pd(now[n]);	//�ж��Ƿ����
//		n++;
//	}
//	for (n = 0; n < N; n++)
//		vist[n] = 0;			//���δ����
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
//char beg[6] = { 'A','B','C','D','E','*' };		//��ʾ��ʼ״̬
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
//	if (now[beg] == '*' || now[end] == '*')			//ֻ����������һ���ǿո���ܽ���
//	{
//		if (((end < 3 && beg <3) && end == beg + 1) || ((beg > 2 && end >2) && end == beg + 1) || (beg + 3 == end))		//�ж��Ƿ�����
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
//int pd(char *now)		//�ж��Ƿ���У����з���1�����򷵻�0
//{
//	int i, j;
//	char noww[100][6];
//	int rear = 0, front = 0;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 6; j++)			//ö�����н������
//		{
//			if (i == j)
//				continue;
//			if (swap(now, i, j))
//			{
//				strcpy(noww[rear++], now);			//������Խ���������
//				swapp(now, i, j);
//				j = 0;
//				if (same(now))
//					return 1;
//			}
//		}
//		if (front)
//			strcpy(now, noww[front++]);			//�������ͬ������
//	}
//	return 0;
//}
//
//int main()
//{
//	int N;			//����N��״̬
//	char now[100][6];	//�ֱ��ʾN��״̬
//	int can[100];		//��i���Ƿ���У�
//	int n = 0;
//	cin >> N;
//	while (n < N)
//	{
//		cin >> now[n];		//�����n�е�״̬
//		can[n] = pd(now[n]);	//�ж��Ƿ����
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