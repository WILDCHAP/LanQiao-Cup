/*��������
����FJ��ɳ����д������һЩ�ַ�����
����A1 = ��A��
����A2 = ��ABA��
����A3 = ��ABACABA��
����A4 = ��ABACABADABACABA��
������ ��
���������ҳ����еĹ��ɲ�д���е�����AN��
�����ʽ
��������һ������N �� 26��
�����ʽ
�����������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С��س�����
��������
3
�������
ABACABA*/

#include<iostream>
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
using namespace std;

void f(int n) {
	if (n == 1) {
		printf("A");
	}
	else {
		f(n - 1);
		printf("%c", 'A' + n - 1);
		f(n - 1);
	}
}

int main()
{
	int N;
	cin >> N;
	f(N);
	system("pause");
	return 0;
}
