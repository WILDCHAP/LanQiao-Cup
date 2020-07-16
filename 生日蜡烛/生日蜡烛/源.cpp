#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (int i = 0; i < 100; i++)
	{
		int n = 0, j = i;;//n吹蜡烛数,j今年岁数
		while (n< 236)
		{
			j++;
			n = (i + j)*(j - i + 1) / 2;
		}
		if (n == 236)
		{
			printf("%d  %d\n", i, j); 
			break;
		}		
	}
	system("pause");
	return 0;
}