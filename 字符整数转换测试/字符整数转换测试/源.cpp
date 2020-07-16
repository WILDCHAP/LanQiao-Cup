#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int l = 0;

double chartodouble(char f[])   //字符串转换为double型数字
{
	double x = 0.0;  //用x来储存这个数字
	int i = 0, k = 0;
	while (f[i] >= '0' && f[i] <= '9')
	{
		x = x * 10 + (f[i] - '0');
		i++;
		l++;
	}
	if (f[i] == '.')
	{
		i++;
		while (f[i] >= '0' && f[i] <= '9')
		{
			x = x * 10 + (f[i] - '0');
			i++;
			k++;
			l++;
		}
	}
	while (k != 0)
	{
		x = x / 10;
		k--;
	}
	return x;
}

/*char  * doubletochar(int n) //double转换成char
{
	char *b=new char[10];
	int i = n, k = 0, j = 1;
	if (n < 0)
		b[0] = '-';
	else if (n == 0)
	{
		b[0] = '0';
		b[1] = '\0';
	}
	else
		b[0] = '+';
	while ((i / 10) > 0)
	{
		i = i / 10;
		k++;
	}
	while (k != 0)
	{
		int z = n / ((int)pow(10, k--));
		b[j++] = z+'0';
	}
	b[j] = '\0';
	return b;
}*/

int main()
{
	char a[10],b[10];
	int i;
	scanf("%s", &a);
	printf("原字符串：%s\n开始转换...\n",a);
	double n;
	n = chartodouble(a);
	printf("%f\n", n);
	scanf("%d", &i);
	printf("开始转换...\n");
	//char *b = new char[10];
	//char *c=doubletochar(i);
	printf("%c", (char)();
	system("pause");
	return 0;
}