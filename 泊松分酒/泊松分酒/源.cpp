#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int A, B, C, a, b, c, n;
	while (cin >> A >> B >> C >> a >> b >> c >> n)
	{
		if ((a + b + c) < n || n>A)
			cout << "������" << endl;
		else
		{
			int beg_a = a, beg_b = b, beg_c = c;		//������ʼ״̬�����ĳһ�ε��˳�ʼ״̬֤���޷��ﵽĿ��
			cout << a << ',' << b << ',' << c << endl;
			while (a != n && b != n && c != n)
			{
				if (b == 0)		//bΪ�գ���a����b
				{
					if (a <= B)
					{
						b = a;
						a = 0;
					}
					else
					{
						a = a - (B - b);
						b = B;
					}
					cout << a << ',' << b << ',' << c << endl;
				}
				if (c != C)
				{
					if (b <= (C - c))
					{
						c = b + c;
						b = 0;
					}
					else
					{
						b = b - (C - c);
						c = C;
					}
					cout << a << ',' << b << ',' << c << endl;
				}
				if (c == C)
				{
					if ((c + a) <= A)
					{
						a = a + c;
						c = 0;
					}
					else
					{
						c = c - (A - a);
						a = A;
					}
					cout << a << ',' << b << ',' << c << endl;
				}
				if (a == beg_a && b == beg_b && c == beg_c)
				{
					cout << "������" << endl;
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}