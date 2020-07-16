#include<iostream>
#include<stdlib.h>
#define MAXSIZE 100
using namespace std;
typedef int datatype;
typedef struct {
	datatype a[MAXSIZE];
	int top;
}seq_sta;

//初始化
void init(seq_sta *st)
{
	st->top = 0;
}

//数据进栈
void put(seq_sta *st)
{
	if (st->top >= MAXSIZE)
	{
		cout << "栈为满!无法进行进栈!\n";
		exit(1);
	}
	datatype k;
	cout << "请输入一组以'0'作为结束标识的数据进栈: ";
	cin >> k;
	while (k != 0)
	{
		st->a[st->top++] = k;
		cin >> k;
	}
}

//判断栈是否为空
int empty(seq_sta *st)
{
	return (st->top ? 0 : 1);
}
//获取栈顶元素
void display(seq_sta *st)
{
	if (!empty(st))
	{
		cout << "栈是空的，无法读取数据!\n";
		exit(1);
	}
	cout << st->a[st->top - 1];
}

//十进制整数m到十六进制数的转换功能
void Dto16(int m)
{
	seq_sta s;
	init(&s);
	char k;
	cout << "十进制数" << m << "对应的十六进制数是：";
	while (m)
	{
		if (0 <= m % 16 && m % 16 <= 9)
			k = m % 16 + '0';
		else
			k = (m % 16 - 10) + 'A';
		s.a[s.top++] = k;
		m = m / 16;
	}
	while (!empty(&s))
		putchar(s.a[s.top--]);
	cout << endl;
}

int main()
{
	int m;
	cout << "请输入待转换的十进制数字: \n";
	cin >> m;
	Dto16(m);
	system("pause");
	return 0;
}