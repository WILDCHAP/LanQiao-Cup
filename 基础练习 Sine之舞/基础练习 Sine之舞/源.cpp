/*��������
�������FJΪ������ţ�ǿ�������ѧ�����Σ�FJ֪����Ҫѧ�����ſΣ�������һ���õ����Ǻ�����������������׼������ţ����һ����Sine֮�衱����Ϸ��Ԣ�����֣������ţ�ǵļ���������
����������
����An=sin(1�Csin(2+sin(3�Csin(4+...sin(n))...)
����Sn=(...(A1+n)A2+n-1)A3+...+2)An+1
����FJ������ţ�Ǽ���Sn��ֵ���������FJ��ӡ��Sn���������ʽ���Է�����ţ�����⡣
�����ʽ
��������һ������N<201��
�����ʽ
�����������Ӧ�ı��ʽSn����һ�����з�����������в��ú��ж���Ŀո���С��س�����
��������
3
�������
((sin(1)+3)sin(1�Csin(2))+2)sin(1�Csin(2+sin(3)))+1*/

/*#include<iostream>
#include<stdlib.h>
using namespace std;

void an(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "sin(" << i;
		if (i % 2 != 0 && i != n)
			cout << "-";
		else if (i % 2 == 0 && i != n)
			cout << "+";
	}
	for (int j = 1; j <= n; j++)
		cout << ")";
}

void sn(int n)
{
	for (int i = 1; i < n; i++)
	{
		cout << "(";
	}
	for (int j = 1; j <= n; j++)
	{
		an(j);
		cout << "+" << n - j + 1;
		if (j != n)		//���һ������������
			cout << ")";
	}
}

int main()
{
	int N;
	cin >> N;
	sn(N);
	system("pause");
	return 0;
}*/


//�ڶ�����(����㣺������Ϊsn������)
#include<iostream>
using namespace std;

void a(int n)
{
	int i;bool tag=false;
	for(i=1;i<=n;i++)
	{
		if(!tag)tag=true;
		else
		{
			if(i%2==0)cout<<'-';
			else	cout<<'+';
		}
		cout<<"sin("<<i;
	}
	for(i=1;i<=n;i++)
	cout<<')';
}

void s(int n)
{
	int i;
	for(i=1;i<n;i++)cout<<'(';
	for(i=1;i<=n;i++)
	{
		a(i);cout<<'+'<<n-i+1;
		if(i<n)
		cout<<')';
	}
}

int main()
{
	int n;cin>>n;
	s(n);
	return 0;
} 
