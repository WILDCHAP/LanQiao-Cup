#include<iostream>
#include<stdlib.h>
using namespace std;
int sum = 0, k = 1;		//合法方案数
int nn;			//看到的折现数目
int see[100];
typedef struct phone{
	int num;		//节点序号
	int i, j;		//i:是否经过；j:方向（1：进。2：出）
	struct phone* next;
}phone;		
typedef struct mima{
	int sum;		//节点序号
	//int i;		//i:是否经过；j:方向（1：进。2：出）
	struct phone *headnext;
}mima;				//起始位置
typedef struct {
	phone s[9];
}all;
all s;		//9个按键

int pd(all p)
{
	int k = 0, i;
	for (i = 0; i <= nn; i++)
	{
		if (p.s[see[i]].i != 1)
			return 0;
	}
	return 1;
}

void dfs(int n)
{
	all p;
	if ((n - 1) >= 0 && s.s[n - 1].i != 1)//111
	{
		s.s[n - 1].i = 1;
		p = s;
		dfs(n - 1);
		s.s[n - 1].i = 0;		//回溯
		k++;
		if (k >= 4 && 1 == pd(p))
			sum++;
		else if(0 == pd(p))
			return;
	}
	if ((n + 1) < 9 && s.s[n + 1].i != 1)
	{
		s.s[n + 1].i = 1;
		p = s;
		dfs(n + 1);
		s.s[n + 1].i = 0;
		k++;
		if (k >= 4 && pd(p)==1)
			sum++;
		else if(0 == pd(p))
			return;
	}
	/////////////////////////222
	if ((n - 2) >= 0 && s.s[n - 2].i != 1)
	{
		if ((( n == 2 || n == 5 || n == 8)&& s.s[n - 1].i == 1) || (n == 0 || n == 3 || n == 6 || n==1||n==4||n==7))
		{
			s.s[n - 2].i = 1;
			p = s;
			dfs(n - 2);
			s.s[n - 2].i = 0;
			k++;
			if (k >= 4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
	if ((n + 2) < 9 && s.s[n + 2].i != 1)
	{
		if (((n == 0 || n == 3 || n == 6) && s.s[n + 1].i == 1) || (n == 2 || n == 5 || n == 8 ||  n == 1 || n == 4 || n == 7))
		{
			s.s[n + 2].i = 1;
			p = s;
			dfs(n + 2);
			s.s[n + 2].i = 0;
			k++;
			if (k >= 4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
	//////////////////////333
	if ((n - 3) >= 0 && s.s[n - 3].i != 1)	//如果向上
	{
		s.s[n - 3].i = 1;
		p = s;
		dfs(n - 3);
		s.s[n - 3].i = 0;
		k++;
		if (k >= 4 && pd(p) == 1)
			sum++;
		else if (0 == pd(p))
			return;
	}
	if ((n + 3) < 9 && s.s[n + 3].i != 1)
	{
		s.s[n + 3].i = 1;
		p = s;
		dfs(n + 3);
		s.s[n + 3].i = 0;
		k++;
		if (k >= 4 && pd(p) == 1)
			sum++;
		else if (0 == pd(p))
			return;
	}
	///////////////////444
	if ((n - 4) >= 0 && s.s[n - 4].i != 1)	
	{
		if ((n == 6 && s.s[4].i == 1)||n!=6)
		{
			s.s[n - 4].i = 1;
			p = s;
			dfs(n - 4);
			s.s[n - 4].i = 0;
			k++;
			if (k >= 4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
	if ((n + 4) < 9 && s.s[n + 4].i != 1)
	{
		if ((n == 2 && s.s[4].i == 1) || n != 2)
		{
			s.s[n + 4].i = 1;
			p = s;
			dfs(n + 4);
			s.s[n + 4].i = 0;
			k++;
			if (k >= 4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
	///////////////////555
	if ((n - 5) >= 0 && s.s[n - 5].i != 1)
	{
		s.s[n - 5].i = 1;
		p = s;
		dfs(n - 5);
		s.s[n - 5].i = 0;
		k++;
		if (k >= 4 && pd(p) == 1)
			sum++;
		else if (0 == pd(p))
			return;
	}
	if ((n + 5) < 9 && s.s[n + 5].i != 1)
	{
		s.s[n + 5].i = 1;
		p = s;
		dfs(n + 5);
		s.s[n + 5].i = 0;
		k++;
		if (k >= 4 && pd(p) == 1)
			sum++;
		else if (0 == pd(p))
			return;
	}
	//////////////// 6666
	if ((n - 6) >= 0 && s.s[n - 6].i != 1)	
	{
		if (s.s[n - 3].i == 1)
		{
			s.s[n - 6].i = 1;
			p = s;
			dfs(n - 6);
			s.s[n - 6].i = 0;
			k++;
			if (k >= 4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
	if ((n + 6) < 9 && s.s[n + 6].i != 1)
	{
		if (s.s[n + 3].i == 1)
		{
			s.s[n + 6].i = 1;
			p = s;
			dfs(n + 6);
			s.s[n + 6].i = 0;
			k++;
			if (k >= 4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
	/////////////7777
	if ((n - 7) >= 0 && s.s[n - 7].i != 1)
	{
		s.s[n - 7].i = 1;
		p = s;
		dfs(n - 7);
		s.s[n - 7].i = 0;
		k++;
		if (k >= 4 && pd(p) == 1)
			sum++;
		else if (0 == pd(p))
			return;
	}
	if ((n + 7) < 9 && s.s[n + 7].i != 1)
	{
		s.s[n + 7].i = 1;
		p = s;
		dfs(n + 7);
		s.s[n + 7].i = 0;
		k++;
		if (k >= 4 && pd(p) == 1)
			sum++;
		else if (0 == pd(p))
			return;
	}
	////////////888
	if ((n - 8) >= 0 && s.s[n - 8].i != 1)
	{
		if (s.s[4].i == 1)
		{
			s.s[n - 8].i = 1;
			p = s;
			dfs(n - 8);
			s.s[n - 8].i = 0;
			k++;
			if (k >= 4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
	if ((n + 8) < 9 && s.s[n + 8].i != 1)
	{
		if (s.s[4].i == 1)
		{
			s.s[n + 8].i = 1;
			p = s;
			dfs(n + 8);
			s.s[n + 8].i = 0;
			k++;
			if(k>=4 && pd(p) == 1)
				sum++;
			else if (0 == pd(p))
				return;
		}
	}
}


int main()
{
	cin >> nn;
	int k,b=0;
	int i, j;
	for (k = 0; k < 9; k++)
	{
		s.s[k].i = 0; s.s[k].j = 0;		//初始化
	}
	for (k = 0; k < (nn+2); k++)
	{
		cin >> i;
		see[b++] = i ;
		/*cin >> i;
		if (k == 0)
			see[b++] = i - 1;
		else if (see[b - 1] != (i - 1))
			see[b++] = i - 1;
		else if (k == (2*nn - 1))
			see[b++] = i - 1;*/
		/*cin >> i >> j;p
		s[i - 1].i = 1;	//标记通过
		//s[(i - 1) % 3].j = 2;	//标记出
		s[j - 1].i = 1;*/
		//s[(j - 1) % 3].j = 1;	//标记进
	}
	/*for (k = 0; k < 9; k++)
	{
		dfs(k);			//从k开始深搜
	}*/
	dfs(0);
	cout << sum << endl;
	system("pause");
	return 0;
}