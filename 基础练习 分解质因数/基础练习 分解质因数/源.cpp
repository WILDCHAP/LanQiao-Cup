/*问题描述
　　求出区间[a,b]中所有整数的质因数分解。
输入格式
　　输入两个整数a，b。
输出格式
　　每行输出一个数的分解，形如k=a1*a2*a3...(a1<=a2<=a3...，k也是从小到大的)(具体可看样例)
样例输入
3 10
样例输出
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
提示
　　先筛出所有素数，然后再分解。
数据规模和约定
　　2<=a<=b<=10000*/

/*#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

bool pd(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int i, j, k;
	int n[100];
	bool tag = false, tag2 = false;
	for (i = a; i <= b; i++)
	{
		tag = false;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				tag = true;
				break;
			}
		}
		if (!tag)
		{
			cout << i << "=" << i ;
		}
		else
		{
			cout << i << "=";
			tag2 = false;
			int z = i;
			while (z != 1)
			{
				for (k = 2; k <= z; k++)
				{
					if (z % k == 0 && pd(k))
					{
						if (tag2)
							cout << "*";
						else
							tag2 = true;
						cout << k;
						z = z / k;
						k = 1;
					}
				}
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/

//第二次做 
#include<iostream>
#include<math.h>
using namespace std;

bool pd(int n)
{
	for(int i=2;i<=(sqrt(n));i++)
	if(n%i==0)return false;
	return true;
}

int main()
{
	int a,b,i,j,k;cin>>a>>b;
	bool tag=false;
	for(i=a;i<=b;i++)
	{
		k=i;tag=false;
		cout<<i<<"=";
		while(k!=1)
		{
			for(j=2;j<=k;j++)
			{
				if(k%j==0&&pd(j))
				{
					if(tag)cout<<'*';
					else tag=true;
					cout<<j;
					k=k/j;
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}










/*while (x != 1) 
{
	for (i = 2; i <= x; i++) 
	{
		if (is(i) && x%i == 0) 
		{
			printf("%d", i);
			if (i != x) 
			{
				printf("x");
			}
			x = x / i;
			i = 1;
		}
	}
}*/
