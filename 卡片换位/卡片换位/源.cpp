#include<stdio.h>
#include<stdlib.h>

char s[2][3];
typedef struct {
	int i;
	int j;
}sol;


void get() //��ʼ��
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

int change()//����AB��λ��
{
	int n;     //nΪ���ٲ���
	sol a, b,dd1,dd2,dd3,;  //�ֱ�ΪA,Bԭ������λ��,С����λ��
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