/*问题描述
　　最近FJ为他的奶牛们开设了数学分析课，FJ知道若要学好这门课，必须有一个好的三角函数基本功。所以他准备和奶牛们做一个“Sine之舞”的游戏，寓教于乐，提高奶牛们的计算能力。
　　不妨设
　　An=sin(1–sin(2+sin(3–sin(4+...sin(n))...)
　　Sn=(...(A1+n)A2+n-1)A3+...+2)An+1
　　FJ想让奶牛们计算Sn的值，请你帮助FJ打印出Sn的完整表达式，以方便奶牛们做题。
输入格式
　　仅有一个数：N<201。
输出格式
　　请输出相应的表达式Sn，以一个换行符结束。输出中不得含有多余的空格或换行、回车符。
样例输入
3
样例输出
((sin(1)+3)sin(1–sin(2))+2)sin(1–sin(2+sin(3)))+1*/

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
		if (j != n)		//最后一个不用左括号
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


//第二次做(错误点：错误认为sn右括号)
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
