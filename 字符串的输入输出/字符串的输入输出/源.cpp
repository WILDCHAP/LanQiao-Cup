#include<stdio.h>
#include<stdlib.h>

int main()
{
	char num1[100][100];
	char num2[100];
	int i = 0, z = 0;
	printf("请输入一个正整数N：");
	int n;
	scanf("%d", &n);
	printf("现在请输入字符串：\n");
	/*for(i=0;i<n;i++)
	{
		scanf("%s", num1[i]);
	}*/
	getchar();
	char ch;
	int j = 0;
	//ch = getchar();
	while (i<n)
	{
		ch = getchar();
		if (ch != '\n')
			num1[i][j++] = ch;
		else
		{
			num1[i][j] = '\0';
			i++; j = 0;
		}
	}
	char c;
	c = getchar();
	while (c != '\n')
	{
		if (c != ' ')
		{
			num2[z++] = c;
			
		}c = getchar();
	}
	num2[z] = '\0';
	for (i = 0; i < n; i++)
	{
		printf("%s\n", num1[i]);
	}
	for (i = 0; i < z; i++)
	{
		printf("%c\n", num2[i]);
	}
	system("pause");
	return 0;
}