#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1=0, s2=0;
	for (int i = 1; i <= 100; i++)
	{
		s1 += i;  //��i��ú����
		s2 += s1;  //��ú����
	}
	printf("%d\n", s2);
	system("pause");
	return 0;
}