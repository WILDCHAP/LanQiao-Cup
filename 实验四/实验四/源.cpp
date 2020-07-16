#include<iostream>
#include<stdlib.h>
#define MAXSIZE 100
using namespace std;
typedef int datatype;
typedef struct {
	datatype a[MAXSIZE];
	int top;
}seq_sta;

//��ʼ��
void init(seq_sta *st)
{
	st->top = 0;
}

//���ݽ�ջ
void put(seq_sta *st)
{
	if (st->top >= MAXSIZE)
	{
		cout << "ջΪ��!�޷����н�ջ!\n";
		exit(1);
	}
	datatype k;
	cout << "������һ����'0'��Ϊ������ʶ�����ݽ�ջ: ";
	cin >> k;
	while (k != 0)
	{
		st->a[st->top++] = k;
		cin >> k;
	}
}

//�ж�ջ�Ƿ�Ϊ��
int empty(seq_sta *st)
{
	return (st->top ? 0 : 1);
}
//��ȡջ��Ԫ��
void display(seq_sta *st)
{
	if (!empty(st))
	{
		cout << "ջ�ǿյģ��޷���ȡ����!\n";
		exit(1);
	}
	cout << st->a[st->top - 1];
}

//ʮ��������m��ʮ����������ת������
void Dto16(int m)
{
	seq_sta s;
	init(&s);
	char k;
	cout << "ʮ������" << m << "��Ӧ��ʮ���������ǣ�";
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
	cout << "�������ת����ʮ��������: \n";
	cin >> m;
	Dto16(m);
	system("pause");
	return 0;
}