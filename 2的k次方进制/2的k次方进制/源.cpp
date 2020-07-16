#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double max(int k, int w)
{
	int n;	//记录一下一共多少位数
	n = w / k;	//n为高位可取完的位数,
	int m;
	m = w%k;	//m为最后剩下的高位,这个高位不能取完
	if (n<2)
		return -1;	//如果小于两位，返回错误
	int z = 2, num = 0;	double sum = 0.0;	//从两位数开始，sum用来储存所有情况，num用来储存当前高位情况
	int a[100];			//定义一个数组来加
	int d = 0, dd;						//数组下标
	while (z <= n)		//处理完全部分
	{
		int y = 1;		//最高位从1开始			最高位：y  当前位数:z
		while ((pow(2, k) - z) >= y)	//求当前位数所有情况
		{
			if (z == 2)
			{
				a[y - 1] = pow(2, k) - y - 1;		//将值写入数组中
				sum = sum + (pow(2, k) - y - 1);
			}
			else
			{
				d++; num = 0;
				for (dd = d; dd<(pow(2, k) - 2); dd++)
					num = num + a[dd];
				sum = sum + num;
				//printf("%.0f\n",sum);
			}
			y++;
		}
		z++;		//处理完当前位数
	}
	int i = 1;
	while (i <= m)			//处理剩余部分
	{
		d++; num = 0;
		for (dd = d; dd<(pow(2, k) - 2); dd++)
			num = num + a[dd];
		sum = sum + num;
		i++;
	}
	return sum;
}

int main()
{
	int k, w;
	double n;
	printf("请输入k和w：");
	scanf("%d%d", &k, &w);
	n = max(k, w);
	printf("一共有%.0f种情况\n", n);
	system("pause");
	return 0;
}