/*��������
����ƽ�������������Σ����ǵı�ƽ����ֱ������ϵ��X���Y�ᡣ����ÿ�����Σ����Ǹ�������һ����Զ�������꣬����������������εĽ��������
�����ʽ
����������������У�ÿ������һ�����Ρ�
������ÿ���У��������ε�һ����Զ�������꣬ÿ��������궼����������ֵ������10^7��ʵ����ʾ��
�����ʽ
�������������һ��ʵ����Ϊ���������������С������λ��
��������
1 1 3 3
2 2 4 4
�������
1.00*/


#include<iostream>
#include<stdlib.h>
#include<stdio.h> 
using namespace std;
typedef struct {
	double x, y;
}point;
double max(int a,int b)
{
	return a>b? a:b;
}
double min(int a,int b)
{
	return a<b? a:b;
}
int main()
{
	point a1, a2, b1, b2, n1, n2;
	cin >> a1.x >> a1.y >> a2.x >> a2.y >> b1.x >> b1.y >> b2.x >> b2.y;
	n1.x = max(min(a1.x, a2.x), min(b1.x, b2.x));
	n1.y = max(min(a1.y, a2.y), min(b1.y, b2.y));
	n2.x = min(max(a1.x, a2.x), max(b1.x, b2.x));
	n2.y = min(max(a1.y, a2.y), max(b1.y, b2.y));
	if (n1.x < n2.x && n1.y < n2.y)
		printf("%.2f", (n2.x - n1.x)*(n2.y - n1.y));
	else
		printf("0.00");
	system("pause");
	return 0;
}
