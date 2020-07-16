#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

typedef struct {
	char ch[100];
	int top;
}s_t;

int add(int x, int y)
{
	return x + y;
}
int add(int x, int y, int z)
{
	return x + y + z;
}
int min(int x, int y)
{
	return x < y ? x : y;
}
int max(int x, int y)
{
	return x > y ? x : y;
}
int doubleme(int x)
{
	return 2 * x;
}

int main()
{
	char a[100];
	char ch;
	int i = 0;
	while ((ch = getchar()) != '\n')
		a[i++] = ch;
	a[i] = '\0';
	s_t b;
	b.top = 0;
	int num[100], z = 0;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != ')' && !(a[i] >= '0' && a[i] <= '9'))
			b.ch[b.top++] = a[i];									//不是右括号也不是数字
		else if(a[i]==')')						//如果是右括号，就根据左括号前面的函数从数字数组中取值
		{
			int l = 0;
			while (b.ch[b.top] != '(')
			{
				if (b.ch[b.top--] == ',')
					l++;
			}
			if (b.ch[b.top -1] == 'd')
			{
				if (l == 1)
				{
					num[z-2] = num[z-2] + num[z-1];
					z = z-1;
				}
				if (l == 2)
				{
					num[z-3] = num[z-3] + num[z-2] + num[z-1];
					z = z-2;
				}
				b.top = b.top - 3;
			}
			else if (b.ch[b.top -1] == 'n')
			{
				num[z-2] = num[z-2] < num[z-1] ? num[z-2] : num[z-1];
				b.top = b.top - 3;
				z = z-1;
			}
			else if (b.ch[b.top -1] == 'x')
			{
				num[z-2] = num[z-2] > num[z-1] ? num[z-2] : num[z-1];
				b.top = b.top - 3;
				z = z - 1;
			}
			else if (b.ch[b.top-1] == 'e')
			{
				num[z-1] = 2 * num[z-1];
				b.top = b.top - 8;
			}
		}
		else				//如果是数字
		{
			if (a[i - 1] >= '0' && a[i - 1] <= '9')
				num[z - 1] = num[z - 1] * 10 + (a[i]-'0');
			else
			{
				num[z++] = a[i]-'0';
			}
		}
	}
	cout << num[0] << endl;
	system("pause");
	return 0;
}