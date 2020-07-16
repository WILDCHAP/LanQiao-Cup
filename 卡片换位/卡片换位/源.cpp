#include<stdio.h>
#include<stdlib.h>

char s[2][3];
typedef struct {
	int i;
	int j;
}sol;


void get() //初始化
{
	char ch;
	ch = getchar();
	int i = 0, j = 0;
	while (ch != '\t' && i < 3)
	{ 
		s[0][i++] = ch;
		ch = getchar();
	}
	ch = getchar();
	while (j < 3)
	{
		s[1][j++] = ch;
		ch = getchar();
	}
}

int change()//交换AB的位置
{
	int n;     //n为最少步数
	sol a, b,dd1,dd2,dd3,;  //分别为A,B原来所在位置,小兵的位置
	for (int i = 0; i < 2; i++)
	{ 
		for (int j = 0; j < 3; j++)
		{
			if (s[i][j] == 'A')
			{
				a.i = i; a.j = j;
			}
			if (s[i][j] == 'B')
			{
				b.i = i; b.j = j;
			}
		}
	}
		
}

bool left(sol *a)
{
	if ((a->j - 1) < 0)
		return false;
	else
	{
		a->j--;
		return true;
	}
}

bool right(sol *a)
{
	if ((a->j + 1) > 2)
		return false;
	else
	{
		a->j++;
		return true;
	}
}

bool up(sol *a)
{
	if ((a->i - 1) < 0)
		return false;
	else
	{
		a->i--;
		return true;
	}
}

bool down(sol *a)
{
	if ((a->i + 1) > 1)
		return false;
	else
	{
		a->i++;
		return true;
	}
}



int main()
{
	system("pause");
	return 0;
}