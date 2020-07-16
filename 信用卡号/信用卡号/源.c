#include<stdio.h>

int main()
{
	char num[16] = { 0 };
	int k = 1;    //n偶数项相加，m奇数项×2取一位相加
	while(k)
	{ 
		int n =0,m = 0;
		scanf("%s", &num);
		int i = 15;
		while (num[i] == '\0')
			i--;
		int j = i + 1;
		for (i; i >= 0; i--)
		{
			if ((j - i) % 2 != 0)
			{
				n += (num[i]-'0');
			}
			else
			{
				if ((2 * (num[i] - '0')) < 10)
					m += (2 * (num[i] - '0'));
				else
					m += (2 * (num[i] - '0')-9);
			}
		}
		int z = n + m;
		if (z % 10 == 0)
			printf("\t正确\n");
		else
			printf("\t错误\n");}
}