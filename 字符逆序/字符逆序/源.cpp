#include<stdio.h>
#include<stdlib.h>


void change(char *ch)
{
	char *c = ch;
	char s;
	int i=0;
	while (*(c + i) != '\0')
	{
		i++;
	}
	for (int j = 0; j < (i / 2); j++)
	{
		s = *(ch + j);
		*(ch + j) = *(ch + (i - j - 1));
		*(ch + (i - j - 1)) = s;
	}
}


int main()
{
	char old[100];
	printf("������ԭ�ַ�����");
	scanf("%s", old);
	change(old);
	printf("���ַ�����%s\n",old);
	system("pause");
	return 0;
}